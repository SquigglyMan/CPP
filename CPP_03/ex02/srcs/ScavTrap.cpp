/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:30:57 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 16:12:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap( "I am Scav" ) {
	std::cout << DARKRED << "Default constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {
}

ScavTrap::~ScavTrap() {
	std::cout << DARKRED << "ScavTrap destructor called" << COLOR_RESET << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << DARKRED << this->getName() << " is now in Gate keeper mode" << COLOR_RESET << std::endl; 
}