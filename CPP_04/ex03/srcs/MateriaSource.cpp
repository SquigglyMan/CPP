/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:17 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 16:57:32 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default MateriaSource constructor" << std::endl;
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
	std::cout << "Default MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (slot[i])
			delete slot[i];
	}
}

AMateria* MateriaSource::getMateria( std::string const & type ) {
	for (int i = 0; i < 4; i ++){
		if (slot[i] && slot[i]->getType() == type)
			return (slot[i]);
	}
	return (NULL);
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++)
		if (slot[i] && slot[i]->getType() == type)
			return (slot[i]->clone());
	return (NULL);
}

void	MateriaSource::learnMateria( AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (slot[i] == NULL)
		{
			slot[i] = m;
			break ;
		}
}