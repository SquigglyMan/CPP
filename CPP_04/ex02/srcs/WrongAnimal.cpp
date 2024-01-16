/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:38 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 14:28:21 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src ) {
	this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string	WrongAnimal::getType( void ) {
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Wrong animal noise" << std::endl;
}
