/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:51:08 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 14:53:16 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src) {
	*this = src;
}

Cat& Cat::operator=( const Cat& src ) {
	this->type = src.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meow" << std::endl;
}