/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:28:42 by llarue            #+#    #+#             */
/*   Updated: 2024/09/25 16:32:24 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{	
	if (ac != 2)
		return (std::cout << "Usage: ./btc <filename>.txt" << std::endl, 1);
	if (av[1])
	{
		if (!av[1][0])
			return (std::cout << "Error: filename cannot be empty" << std::endl, 1);

		std::string	inputFile(av[1]);
		
		if (inputFile.substr(inputFile.find_last_of(".") + 1) != "txt")
			return (std::cout << "Error: input file type should be a .txt" << std::endl,  1);
		if (!inputFile.compare(inputFile.substr(inputFile.find_last_of("."))))
			return (std::cout << "Error: input file name cannot be empty" << std::endl, 1);
	}
	
	BitcoinExchange	btc;

	if (btc.getValidDataStatus())
		btc.execute(av[1]);
	
	return (0);
}