/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:09:41 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 17:54:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Usage : ./Harl <complaints>" << std::endl;
		return (0);
	}
	Harl	Harl;
	while (*(av + 1))
	{
		Harl.complain(*(av + 1));
		av++;
	}
	return (0);
}