/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:51 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 17:02:24 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {
}

void	HumanB::attack( void ) {
	std::cout << name << " attacks with their weapon " << Equiped->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &Equiped ) {
	this->Equiped = &Equiped;
}