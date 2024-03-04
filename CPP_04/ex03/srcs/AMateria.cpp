/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:21 by llarue            #+#    #+#             */
/*   Updated: 2024/03/04 17:23:46 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type() {
	std::cout << ORANGE << "Default AMateria constructor" << COLOR_RESET << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type) {
	std::cout << ORANGE << "AMateria parameter constructor" << COLOR_RESET << std::endl;
}

AMateria::AMateria( AMateria const &src ) {
	*this = src;
}

AMateria& AMateria::operator=( AMateria const &src ) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AMateria::~AMateria() { 
	std::cout << ORANGE << "Default AMateria destructor" << COLOR_RESET << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "Unknow type materia " << this->type << "is used on " << target.getName() << std::endl;
}