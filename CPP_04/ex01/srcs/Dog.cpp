/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:49:42 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 16:39:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << GREEN << "Dog default constructor" << COLOR_RESET << std::endl;
	setType("Dog");
}

Dog::Dog( const Dog& src ) : Animal(src) {
	std::cout << GREEN << "Dog copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Dog& Dog::operator=( const Dog& src ) {
	std::cout << GREEN << "Dog copy assignation operator" << COLOR_RESET << std::endl;
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << GREEN << "Dog default destructor" << COLOR_RESET << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}