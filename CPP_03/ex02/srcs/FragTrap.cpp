/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:22:30 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:23:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() { 
	std::cout << WHEAT << "FragTrap default constructor called" << COLOR_RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap(src) {
}

FragTrap&	FragTrap::operator=( const FragTrap &src ){
	std::cout << GREEN << "FragTrap operator assignation called" << COLOR_RESET << std::endl;
	ClapTrap::operator=( src );
	return (*this);	
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << WHEAT << "FragTrap parameter constructor called" << COLOR_RESET << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap() { 
	std::cout << WHEAT << "FragTrap default destructor called" << COLOR_RESET << std::endl;
}

void	FragTrap::highFiveSGuys( void ) {
	if (hitPoints > 0)
	{
		std::cout << "🙏   " << WHEAT << this->name << " : Gimme a high five!" << COLOR_RESET << std::endl;
		return ;
	}
	std::cout << name << " cannot perform action, " << name << " is dead" << std::endl;
}