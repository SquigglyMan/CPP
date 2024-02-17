/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:30:57 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:12:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << DARKRED << "ScavTrap default constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) {
	std::cout << PURPLE << "ScavTrap parameter constructor called" << COLOR_RESET << std::endl;
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
	std::cout << DARKRED << "ScavTrap default destructor called" << COLOR_RESET << std::endl;
}

void	ScavTrap::guardGate( void ) {
	if (hitPoints > 0)
	{
		std::cout << "🛡️    " << this->name << " is now in Gate keeper mode" << std::endl;
		return ;
	}
	std::cout << name << " cannot perform action, " << name << " is dead" << std::endl;
}