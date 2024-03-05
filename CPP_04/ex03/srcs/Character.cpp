/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:04:48 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 11:38:42 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name() { 
	std::cout << PURPLE << "Default Character constructor" << COLOR_RESET << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( std::string const &name ) : name(name) {
	std::cout << PURPLE << "Parameter Character constructor" << COLOR_RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	std::cout << "Here comes a new challenger : " << this->name << std::endl;
}

Character::Character( Character const &src ) : name(src.name) {
	std::cout << PURPLE << "Copy character constructor" << COLOR_RESET << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = src;
}

Character& Character::operator=( Character const &src ) {
	std::cout << PURPLE << "Character copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
			{
				delete (this->inventory[i]);
				if (src.inventory[i])
					this->inventory[i] = src.inventory[i]->clone();
				else
					this->inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

Character::~Character() { 
	std::cout << PURPLE << "Default Character destructor" << COLOR_RESET << std::endl;
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete(inventory[i]);
}

std::string const& Character::getName() const {
	return (this->name);
}

void	Character::equip( AMateria* m ) {
	if (!m)
	{
		std::cout << "Cannot equip empty materia" << std::endl;
		return ;
	}
	for(int i = 0; i < 4; i++) {
		if (this->inventory[i] == m)
		{
			std::cout << "Materia is already equipped" << std::endl;
			return ;
		}
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << this->name << " has equipped the " << m->getType() << " materia" << std::endl;
			return ;
		}
	}
	std::cout << this->name << "'s inventory is full" << std::endl;
}

void	Character::unequip( int idx ) {
	if (this->inventory[idx])
	{
		this->inventory[idx] = NULL;
		std::cout << this->name << " unequipped materia at inventory " << idx << std::endl;
	}
	else
		std::cout << this->name << " doesn't have anything equipped at invetory " << idx << std::endl;
}

void	Character::use( int idx, ICharacter& target ) {
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << this->name << " hasn't equipped anything at slot " << idx << std::endl;
}