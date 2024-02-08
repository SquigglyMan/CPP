/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:30:57 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 17:12:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap( "I am Scav" ) {
	std::cout << DARKRED << "Default constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name) : name(name), hitPoint(100), energyPoints(50), attackDamage(20) {
	this->name = name;
}

ScavTrap::~ScavTrap() {
	std::cout << DARKRED << "Default destructor called" << COLOR_RESET << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << DARKRED << this->getName() << " is now in Gate keeper mode" << COLOR_RESET << std::endl; 
}