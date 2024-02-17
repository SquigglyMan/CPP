/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:51 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 16:20:23 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << ORANGE << "WrongCat default constructor" << COLOR_RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ) {
	std::cout << PURPLE << "WrongCat copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=( const WrongCat& src ) {
	std::cout << GREEN << "WrongCat copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << ORANGE << "WrongCat default destructor" << COLOR_RESET << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong animal noise" << std::endl;
}
