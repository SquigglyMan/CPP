/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:17 by llarue            #+#    #+#             */
/*   Updated: 2024/03/04 11:26:33 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << PURPLE << "Default MateriaSource constructor" << COLOR_RESET << std::endl;
	for(int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &src ) {
	*this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &src ) {
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			slot[i] = src.slot[i];
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
			return (slot[i]->clone());
	std::cout << "Cannot create unknow materia type" << std::endl;
	return (0);
}

void	MateriaSource::learnMateria( AMateria* m ) {
	for (int i = 0; i < 4; i++)
		if (slot[i] == NULL)
		{
			slot[i] = m;
			break ;
		}
	std::cout << "Cannot learn unknow materia type" << std::endl;
}