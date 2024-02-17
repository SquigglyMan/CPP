/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:30:30 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		//Default constructor

		ClapTrap	defaultClapTrap;

		defaultClapTrap.attack("Enemy Bot");
		defaultClapTrap.takeDamage(5);
		defaultClapTrap.beRepaired(5);
	}
	{
		std::cout << std::endl;

		//Parameter constructor + copy + assignation constructor
		
		ClapTrap	Bot("Bot");
		ClapTrap	Bot2("Bot #2");

		Bot2 = Bot;
		
		Bot.attack("Enemy Bot");
		Bot.takeDamage(5);
		Bot.beRepaired(5);
		Bot.takeDamage(6);
		Bot.takeDamage(5);

		//Bot dies and cannot perform anymore actions
		
		Bot.attack("Enemy Bot");
		Bot.takeDamage(5);
		Bot.beRepaired(5);

		Bot2.takeDamage(5);
	}
	return (0);
}
