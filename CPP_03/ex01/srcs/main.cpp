/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:08:08 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		//Default ScavTrap constructor

		ScavTrap	defaultScavTrap;

		defaultScavTrap.attack("Enemy Bot");
		defaultScavTrap.takeDamage(5);
		defaultScavTrap.beRepaired(5);
		defaultScavTrap.guardGate();
	}
	{
		std::cout << std::endl;

		//Default CalpTrap constructor

		ClapTrap	defaultClapTrap;

		defaultClapTrap.attack("Enemy Bot");
		defaultClapTrap.takeDamage(5);
		defaultClapTrap.beRepaired(5);
	}
	{
		std::cout << std::endl;

		//Parameter ScavTrap constructor

		ScavTrap	Scav("ScavBot");

		Scav.attack("Enemy Bot");

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

		//Parameter ClapTrap constructor

		ClapTrap	Clap("ClapBot");

		Clap.takeDamage(15);
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
