/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:14:04 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 17:53:29 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Default Cure constrcutor" << std::endl;
}

Cure::Cure( Cure const &src ) : AMateria("cure") {
	*this = src;
}

Cure&	Cure::operator=( Cure const &src ) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "Default Cure destructor" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}