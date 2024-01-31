/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:04:48 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 17:00:08 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() { 
	std::cout << "Default Character constructor" << std::endl;
}

Character::Character( std::string const &name ) : name(name) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	std::cout << "Here comes a new challenger : " << this->name << std::endl;
}

Character::Character( Character const &src ) : name(src.name) {
	*this = src;
}

Character& Character::operator=( Character const &src ) {
	if (this != &src)
	{
		this->name = src.name;
		for (int i = 0; i < 4; i++) {
			this->inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character() { 
	std::cout << "Default Character destructor" << std::endl;
}

std::string const& Character::getName() const {
	return (this->name);
}

void	Character::equip( AMateria* m ) {
	for(int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << this->name << " has equipped " << m->getType() << std::endl;
			break ;
		}
	}
	std::cout << this->name << " can't equip " << m->getType() << std::endl;
}

void	Character::unequip( int idx ) {
	if (this->inventory[idx])
	{
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
		std::cout << this->name << " unequipped" << std::endl;
	}
	else
		std::cout << this->name << " can't unequip this materia" << std::endl;
}

void	Character::use( int idx, ICharacter& target ) {
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
		std::cout << this->name << " used " << this->inventory[idx]->getType() << " on " << target.getName() << std::endl;
	}
	else
		std::cout << this->name << " can't use " << this->inventory[idx]->getType() << std::endl;
}