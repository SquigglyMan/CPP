/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:48:49 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 16:23:00 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << ORANGE << "Animal default constructor" << COLOR_RESET << std::endl;
}

Animal::Animal( const Animal& src) {
	std::cout << PURPLE << "Animal copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal& src) {
	std::cout << GREEN << "Animal copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << ORANGE << "Animal default destructor" << COLOR_RESET << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::setType( std::string newType ) {
	this->type = newType;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal noise" << std::endl;
}