/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:21 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 12:03:17 by llarue           ###   ########.fr       */
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
	std::cout << ORANGE << "Copy AMateria constructor" << COLOR_RESET << std::endl;
	*this = src;
}

AMateria& AMateria::operator=( AMateria const &src ) {
	std::cout << ORANGE << "AMateria copy assignment operator" << COLOR_RESET << std::endl;
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
	std::cout << "unknown type materia " << this->type << "is used on " << target.getName() << std::endl;
}