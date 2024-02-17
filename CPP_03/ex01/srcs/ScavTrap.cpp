/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:30:57 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 12:26:41 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap( "I am Scav" ) {
	std::cout << DARKRED << "Default constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap( src ) {
}

ScavTrap &ScavTrap::operator=( const ScavTrap &src ) {
	std::cout << GREEN << "ScavTrap operator assignation called" << COLOR_RESET << std::endl;
	ClapTrap::operator=( src );
	return (*this);	
}

ScavTrap::~ScavTrap() {
	std::cout << DARKRED << "Default destructor called" << COLOR_RESET << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << DARKRED << this->getName() << " is now in Gate keeper mode" << COLOR_RESET << std::endl; 
}