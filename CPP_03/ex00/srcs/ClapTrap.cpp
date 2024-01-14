/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:00:13 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 13:50:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << ORANGE << "Default constructor called" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
		*this = copy;
		std::cout << ORANGE << "Copy constructor called" << C_RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op) {
	std::cout << ORANGE << "Operator assignation called" << C_RESET << std::endl;
	this->name = op.name;
	this->HitPoints = op.HitPoints;
	this->EnergyPoints = op.EnergyPoints;
	this->AttackDamage = op.AttackDamage;
	return (*this);	
}

ClapTrap::~ClapTrap() { 
	std::cout << ORANGE << "Default destructor called" << C_RESET << std::endl;
}

void	ClapTrap::attack( const std::string &target ) {
	if (EnergyPoints <= 0)
	{
		std::cout << name << " is out of energy" << std::endl ;
		return ;
	}
	std::cout	<< "ClapTrap " << name << " attacks " << target
				<< ", causing " << AttackDamage << " points of damage!"
				<< std::endl;
	EnergyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (HitPoints <= 0)
	{
		std::cout << " is dead" << std::endl;
		return ;
	}
	std::cout << name << " has taken" << amount << "of damage" << std::endl;
	HitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (EnergyPoints <= 0)
	{
		std::cout << name << " is out of energy" << std::endl;
		return ;
	}
	std::cout << name << " repaired himself for" << amount << " hit points" << std::endl;
	EnergyPoints--;
	HitPoints += amount;
}