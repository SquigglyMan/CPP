/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:51 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 16:27:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << YELLOW << "WrongCat default constructor" << COLOR_RESET << std::endl;
	setType("WongCat");
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal(src) {
	std::cout << YELLOW << "WrongCat copy constructor" << COLOR_RESET << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& src ) {
	std::cout << YELLOW << "WrongCat copy assignation operator" << COLOR_RESET << std::endl;
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << YELLOW << "WrongCat default destructor" << COLOR_RESET << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong cat noise" << std::endl;
}
