/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:51 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 14:30:10 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ){
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ) {
	*this = src;
}

WrongCat& WrongCat::operator=( const WrongCat& src ) {
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat( void ){
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong animal noise" << std::endl;
}
