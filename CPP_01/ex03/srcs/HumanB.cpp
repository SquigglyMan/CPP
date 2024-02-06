/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:51 by llarue            #+#    #+#             */
/*   Updated: 2024/02/06 18:17:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("Default Name"), Equiped(NULL) {
	std::cout << BOLD_PURPLE << "HumanB default constructor" << COLOR_RESET << std::endl;
}

HumanB::HumanB( std::string name ) : name(name), Equiped(NULL) {
	std::cout << BOLD_PURPLE << "HumanB parameter constructor" << COLOR_RESET << std::endl;
}

HumanB::~HumanB() {
	std::cout << BOLD_PURPLE << "HumanB destructor" << COLOR_RESET << std::endl;
}

void	HumanB::attack( void ) {
	std::cout << name << " attacks with their weapon " << BLOOD_RED << Equiped->getType() << COLOR_RESET << std::endl;
}

void	HumanB::setWeapon( Weapon &Equiped ) {
	this->Equiped = &Equiped;
}
