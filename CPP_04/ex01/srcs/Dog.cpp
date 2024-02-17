/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:49:42 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 17:12:01 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) {
	std::cout << GREEN << "Dog default constructor" << COLOR_RESET << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src) {
	std::cout << GREEN << "Dog copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Dog& Dog::operator=( const Dog& src ) {
	std::cout << GREEN << "Dog copy assingment operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << GREEN << "Dog default destructor" << COLOR_RESET << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << GREEN << "Woof" << COLOR_RESET << std::endl;
}

Brain	*Dog::getBrain( void ) const {
	return (this->brain);
}