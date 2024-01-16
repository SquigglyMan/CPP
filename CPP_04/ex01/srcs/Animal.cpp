/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:48:49 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 17:07:18 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Brain.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal( const Animal& src) {
	*this = src;
}

Animal &Animal::operator=(const Animal& src) {
	this->type = src.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor" << std::endl;
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

Brain	*Animal::getBrain( void ) const {
	return (NULL);
}