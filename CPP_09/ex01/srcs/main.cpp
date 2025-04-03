/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:24:26 by llarue            #+#    #+#             */
/*   Updated: 2025/04/03 18:05:14 by llarue           ###   ########.fr       */
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
			if (input[i] == '-' && input[i + 1] >= '0' && input[i + 1] <= '9') {
				operations.push(-(input[i + 1] - '0'));
				i += 2;
			}
			if (input[i] >=  '0' && input[i] <= '9') 
				operations.push(input[i] - '0');
			else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
				
				if (!operations.calculate(input[i]))
					return 1;
			}
			else if (!isspace(input[i]) && input[i] != '\0') {
				std::cerr << "Error: invalid character" << std::endl;

				return 1;
			}
		}
		if (!operations.empty())
			std::cout << operations.top() << std::endl;
		return 0;
	}
	std::cerr << ORANGE << "Usage: ./ex01 \"operations\"" << COLOR_RESET << std::endl;
	return 1;
}