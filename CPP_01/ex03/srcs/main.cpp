/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:33 by llarue            #+#    #+#             */
/*   Updated: 2024/02/06 18:58:43 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	defaultWeapon;
		Weapon	club = Weapon("crude spiked club");

		// HumanA	defaultHumanA;
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		HumanA	bob2("Bob", defaultWeapon);
		bob2.attack();
		club.setType("some other type of club");
		bob2.attack();
	}

	{
		Weapon	club = Weapon("crude spiked club");
	
		HumanB	defaultHumanB;
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	return (0);
}