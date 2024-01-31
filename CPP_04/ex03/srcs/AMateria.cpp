/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:21 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 17:23:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default AMateria constructor" << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type) {

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
	std::cout << "Default AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "AMateria " << this->type << "used on " << target.getName() << std::endl;
}