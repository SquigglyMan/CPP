/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:51:08 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 17:11:16 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << RED << "Cat default constructor" << COLOR_RESET << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src) {
	std::cout << RED << "Cat copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Cat& Cat::operator=( const Cat& src ) {
	std::cout << RED << "Cat copy assingment operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << RED << "Cat default destructor" << COLOR_RESET << std::endl;
}

void	Cat::makeSound( void ) const{
	std::cout << RED << "Meow" << COLOR_RESET << std::endl;
}

Brain	*Cat::getBrain( void ) const{
	return (this->brain);
}