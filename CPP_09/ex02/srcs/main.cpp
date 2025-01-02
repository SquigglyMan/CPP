/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:51:36 by llarue            #+#    #+#             */
/*   Updated: 2024/12/29 22:07:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <time.h>

#include "PmergeMe.hpp"

int	main( int argc, char **argv )
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [arguments to sort]" << std::endl;
		return (1);
	}

	std::string input;

	for (int i = 1; argv[i]; i++) {
		input = argv[i];
		std::cout << "input: " << input << std::endl;
		if ( input.size() == 1 && (input[0] != '0' || !isdigit(input[0])))
		{
			std::cout << "Error: arguments should only contain positive intergers" << std::endl;
			return 1;
		}
		for (int i = 0; input[i]; i++) {
			if ( !isdigit(input[i]))
			{
				std::cout << "Error: arguments should only contain positive intergers" << std::endl;
				return 1;
			}
		}
	}
	PmergeMe container(argv);
	container.printContainerElement();
	std::cout << std::endl;

	// std::clock_t start;
	// std:clock_t finish;

	std::cout << "Before:\t";
	//print data

	//sort data
	std::cout << "After:\t";
	//print data

	//show time taken to sort
	
	return (0);
}