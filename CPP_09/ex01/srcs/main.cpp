/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:24:26 by llarue            #+#    #+#             */
/*   Updated: 2025/03/28 19:35:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv ) {
	if (argc == 2) {
		std::string input = argv[1];
		if (input.empty()) {
			std::cout << "Error: arguments cannot be empty" << std::endl;
			return 1;
		}
		RPN operations;

		for (size_t i = 0; i < input.size(); i++) {
			if (input[i] >=  '0' && input[i] <= '9') 
				operations.push(input[i] - '0');
			else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
				if (!operations.calculate(input[i]))
					return 1;
			}
			else if (!isspace(input[i]) && input[i] != '\0') {
				std::cout << "Error" << std::endl;
				return 1;
			}
		}
		if (!operations.empty())
			std::cout << operations.top() << std::endl;
		return 0;
	}
	std::cout << ORANGE << "Usage: ./ex01 operations" << COLOR_RESET << std::endl;
	return 1;
}