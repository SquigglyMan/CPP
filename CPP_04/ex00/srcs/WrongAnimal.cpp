/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 16:17:58 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << ORANGE << "WrongAnimal default constructor" << COLOR_RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	std::cout << PURPLE << "WrongAnimal copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src ) {
	std::cout << GREEN << "WrongAnimal copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << ORANGE << "WrongAnimal default destructor" << COLOR_RESET << std::endl;
}

std::string	WrongAnimal::getType( void ) {
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Wrong animal noise" << std::endl;
}
