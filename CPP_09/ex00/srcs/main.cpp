/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:28:42 by llarue            #+#    #+#             */
/*   Updated: 2025/04/21 09:48:12 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{	
	if (ac != 2)
		return (std::cout << "Usage: ./btc <filename>.csv" << std::endl, 1);
	if (av[1])
	{
		if (!av[1][0])
			return (std::cout << "Error: filename cannot be empty" << std::endl, 1);

		std::string	inputFile(av[1]);
		
		if ( inputFile.find_first_of(".") == std::string::npos || inputFile.substr(inputFile.find_first_of(".") + 1) != "csv" )
			return (std::cout << "Error: input file should be of type .csv" << std::endl,  1);
	}
	
	BitcoinExchange	btc;

	if (btc.getValidDataStatus())
		btc.execute(av[1]);
	
	return (0);
}