/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 14:21:32 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		//Default constructor

		ScavTrap	defaultScavTrap;

		defaultScavTrap.attack("Enemy Bot");
		defaultScavTrap.takeDamage(5);
		defaultScavTrap.beRepaired(5);
		defaultScavTrap.guardGate();
	}
	{
		std::cout << std::endl;

		//Parameter constructor

		ScavTrap	Scav("ScavBot");
		ClapTrap	Clap("ClapBot");

		Scav.attack("Enemy Bot");
		Clap.attack("Enemy Bot");

		Scav.takeDamage(50);
		Scav.beRepaired(50);
		Scav.guardGate();
		Scav.takeDamage(100);
		Scav.takeDamage(50);
		Scav.beRepaired(50);
		Scav.guardGate();
	}
	{
		std::cout << std::endl;

		//Copy Constructor

		ScavTrap	Scav("ScavBot");
		ScavTrap	scavCopy("ScavCopyBot");
		ScavTrap	scavCopy2(scavCopy);

		Scav = scavCopy;
		Scav.takeDamage(100);
		scavCopy.takeDamage(100);
		scavCopy2.takeDamage(100);
	}

	return (0);
}
