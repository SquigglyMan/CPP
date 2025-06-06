/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:14:04 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 10:10:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << GREEN << "Default Cure constrcutor" << COLOR_RESET << std::endl;
}

Cure::Cure( Cure const &src ) : AMateria("cure") {
	std::cout << GREEN << "Copy Cure constrcutor" << COLOR_RESET << std::endl;
	*this = src;
}

Cure&	Cure::operator=( Cure const &src ) {
	std::cout << GREEN << "Cure copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cure::~Cure() {
	std::cout << GREEN << "Default Cure destructor" << COLOR_RESET << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}