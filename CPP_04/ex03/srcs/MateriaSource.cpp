/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:17 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 12:13:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << PURPLE << "Default MateriaSource constructor" << COLOR_RESET << std::endl;
	for(int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &src ) {
	std::cout << PURPLE << "Copy MateriaSource constructor" << COLOR_RESET << std::endl;
	for(int i = 0; i < 4; i++)
		slot[i] = NULL;
	*this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &src ) {
	std::cout << PURPLE << "MateriaSource copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			if (this->slot[i])
			{
				delete (this->slot[i]);
				if (src.slot[i])
					this->slot[i] = src.slot[i]->clone();
				else
					this->slot[i] = NULL;
			}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout << PURPLE << "Default MateriaSource destructor" << COLOR_RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		if (slot[i])
			delete slot[i];
	}
}

std::string MateriaSource::getMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++) {
		if (slot[i] && slot[i]->getType() == type)
			return (slot[i]->getType());
	}
	return ("type is not learned");
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++)
		if (slot[i] && slot[i]->getType() == type)
		{
			std::cout << "New materia created : " << type << std::endl;
			return (slot[i]->clone());
		}
	std::cout << "Cannot create unknown materia type" << std::endl;
	return (0);
}

void	MateriaSource::learnMateria( AMateria* m ) {
	if (m)
	{
		for (int i = 0; i < 4; i++)
			if (slot[i] == NULL)
			{
				slot[i] = m;
				std::cout << "New materia learned : " << m->getType() << std::endl;
				return ;
			}
	}
	std::cout << "Cannot learn unknown materia type" << std::endl;
}