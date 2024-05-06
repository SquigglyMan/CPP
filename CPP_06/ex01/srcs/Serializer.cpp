/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:27:39 by llarue            #+#    #+#             */
/*   Updated: 2024/05/05 12:06:35 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) {
	std::cout << ORANGE << "Serializer default constructor" << COLOR_RESET << std::endl;
}

Serializer::Serializer( Serializer const & src ) {
	std::cout << PURPLE << "Serializer copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Serializer::~Serializer( void ) {
	std::cout << ORANGE << "Serializer default destructor" << COLOR_RESET << std::endl;
}

Serializer	&Serializer::operator=( Serializer const & src ) {
	std::cout << BLUE << "Serializer copy assignment operator" << COLOR_RESET << std::endl;
	(void)src;
	return (*this);
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data *>(raw));
}