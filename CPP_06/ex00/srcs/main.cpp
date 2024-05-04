/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:56:08 by llarue            #+#    #+#             */
/*   Updated: 2024/05/04 11:19:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int ac, char **av )
{
	if (ac == 1) {
		std::cout << "Usage : ./convert <literal>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(av[1]);
	
	return (0);
}