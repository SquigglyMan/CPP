/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 15:47:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << BLUE << "WrongAnimal default constructor" << COLOR_RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	std::cout << BLUE << "WrongAnimal copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src ) {
	std::cout << BLUE << "WrongAnimal copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << BLUE << "WrongAnimal default destructor" << COLOR_RESET << std::endl;
}

std::string	WrongAnimal::getType( void ) {
	return (this->type);
}

void	WrongAnimal::setType( std::string newType ) {
	this->type = newType;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Wrong animal noise" << std::endl;
}
