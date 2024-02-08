/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 14:35:14 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	DefaultClapTrap;
	
	DefaultClapTrap.attack("Default Enemy");
	DefaultClapTrap.takeDamage(5);
	DefaultClapTrap.beRepaired(5);

	ClapTrap	Bot("Bot");

	DefaultClapTrap = Bot;
	
	Bot.attack("Enemy Bot");
	Bot.takeDamage(5);
	Bot.beRepaired(5);
	Bot.takeDamage(6);
	Bot.takeDamage(5);

	return (0);
}
