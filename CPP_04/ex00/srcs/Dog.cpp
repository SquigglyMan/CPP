/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:49:42 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 14:53:06 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src) {
	*this = src;
}

Dog& Dog::operator=( const Dog& src ) {
	this->type = src.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}