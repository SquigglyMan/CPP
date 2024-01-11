/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:30:42 by llarue            #+#    #+#             */
/*   Updated: 2024/01/11 14:44:44 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Usage: ./HarlFilter <complain>" << std::endl, 1);
	Harl		Harl;
	std::string	input;

	input = av[1];
		Harl.complain(input);
	return (0);
}