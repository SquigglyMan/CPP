/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 06:42:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	DefaultClapTrap;
	
	DefaultClapTrap.attack("Default Enemy");
	DefaultClapTrap.takeDamage(5);
	DefaultClapTrap.takeDamage(6);
	DefaultClapTrap.takeDamage(1);
	DefaultClapTrap.beRepaired(5);
	DefaultClapTrap.takeDamage(5);


	ClapTrap	Clap("Bot");

	Clap.attack("Enemy");
	Clap.takeDamage(5);
	Clap.beRepaired(5);
	Clap.takeDamage(6);
	Clap.takeDamage(5);

	return (0);
}
