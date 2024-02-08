/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:00:13 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 14:39:08 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(), hitPoints(-1), energyPoints(-1), attackDamage(-1) { 
	std::cout << ORANGE << "ClapTrap default constructor called" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << PURPLE << "ClapTrap parameter constructor called" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << ORANGE << "ClapTrap copy constructor called" << COLOR_RESET << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src) {
	std::cout << GREEN << "ClapTrap operator assignation called" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);	
}

ClapTrap::~ClapTrap() { 
	std::cout << ORANGE << "ClapTrap default destructor called" << COLOR_RESET << std::endl;
}

void	ClapTrap::attack( const std::string &target ) {
	if (name.empty() && attackDamage == -1)
	{
		std::cout << "This ClapTrap is not initialized" << std::endl;
		return ;
	}
	if (hitPoints > 0)
	{
		if (energyPoints <= 0)
		{
			std::cout << name << " is out of energy" << std::endl ;
			return ;
		}
		std::cout	<< "⚔️    " << "ClapTrap " << name << " attacks " << target
					<< ", dealing " << attackDamage << " damage!"
					<< std::endl;
		energyPoints--;
		return ;
	}

	std::cout << name << " cannot perform action, " << name << " is dead" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (name.empty() && hitPoints == -1)
	{
		std::cout << "This ClapTrap is not initialized" << std::endl;
		return ;
	}
	if (hitPoints > 0)
	{
		if (hitPoints <= 0)
		{
			std::cout << " is dead" << std::endl;
			return ;
		}
		std::cout << "💥   " << name << " has taken " << amount << " of damage" << std::endl;
		hitPoints -= amount;
		if (hitPoints <= 0)
			std::cout << "☠️    " << name << " has taken lethal damage" << std::endl;
		return ;
	}
	std::cout << name << " cannot perform action, " << name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (name.empty() && energyPoints == -1)
	{
		std::cout << "This ClapTrap is not initialized" << std::endl;
		return ;
	}
	if (hitPoints > 0)
	{
		if (energyPoints <= 0)
		{
			std::cout << name << " is out of energy" << std::endl;
			return ;
		}
		std::cout << "🩹   " << name << " repaired himself for " << amount << " hit points" << std::endl;
		energyPoints--;
		hitPoints += amount;
		return ;
	}
	std::cout << name << " cannot perform action, " << name << " is dead" << std::endl;
}