/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:22:30 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 16:12:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("I am Frag") { 
	std::cout << WHEAT << "FragTrap constructor" << COLOR_RESET << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
}

FragTrap::~FragTrap() { 
	std::cout << WHEAT << "FragTrap denstructor" << COLOR_RESET << std::endl;
}

void	FragTrap::highFiveSGuys( void ) {
	std::cout << WHEAT << this->getName() << " : Gimme a high five!" << COLOR_RESET << std::endl;
}