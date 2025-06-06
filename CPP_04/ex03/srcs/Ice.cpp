/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:13:36 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 10:11:09 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << CYAN << "Default Ice constructor" << COLOR_RESET << std::endl;
}

Ice::Ice( Ice const &src) : AMateria("ice") {
	std::cout << CYAN << "Copy Ice constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Ice& Ice::operator=( Ice const &src ) {
	std::cout << CYAN << "Ice copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Ice::~Ice() {
	std::cout << CYAN << "Default Ice destructor" << COLOR_RESET << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
