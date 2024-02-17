/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:51:08 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 16:05:44 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << ORANGE << "Cat default constructor" << COLOR_RESET << std::endl;
	setType("Cat");
}

Cat::Cat( const Cat& src ) : Animal(src) {
	std::cout << PURPLE << "Cat copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Cat& Cat::operator=( const Cat& src ) {
	std::cout << GREEN << "Cat copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << ORANGE << "Cat default destructor" << COLOR_RESET << std::endl;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meow" << std::endl;
}