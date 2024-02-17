/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:22:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	{
		//Default Fragtrap constructor

		FragTrap	defaultFragTrap;

		defaultFragTrap.attack("Enemy Bot");
		defaultFragTrap.takeDamage(50);
		defaultFragTrap.beRepaired(50);
		defaultFragTrap.highFiveSGuys();
	}
	{
		std::cout << std::endl;

		//Parameter FragTrap constructor

		FragTrap	Frag("FragBot");

		Frag.attack("Enemy Bot");

		Frag.takeDamage(50);
		Frag.beRepaired(50);
		Frag.highFiveSGuys();
		Frag.takeDamage(100);
		Frag.takeDamage(50);
		Frag.beRepaired(50);
		Frag.highFiveSGuys();
	}
	return (0);
}
