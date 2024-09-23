/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:10:40 by llarue            #+#    #+#             */
/*   Updated: 2024/09/21 09:09:42 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T >
MutantStack< T >::MutantStack( void ) {
	std::cout << ORANGE << "MutantStack default constructor" << COLOR_RESET << std::endl;
}

template< typename T >
MutantStack< T >::MutantStack( const MutantStack & src ) {
	std::cout << PURPLE << "MutantStack copy constructor" << COLOR_RESET << std::endl;
}

template< typename T >
MutantStack< T >::~MutantStack( void ) {
	std::cout << ORANGE << "MutantStack default destructor" << COLOR_RESET << std::endl;
}

template< typename T >
MutantStack< T >	&MutantStack< T >::operator=( const MutantStack & src ) {
	std::cout << BLUE << "MutantStack copy assignment operator" << COLOR_RESET << std::endl;
	if (this != *src)
	{
		this->c = src.c;
	}
	return (*this);
}

template< typename T >
typename MutantStack< T >::iterator MutantStack< T >::begin( void ) {
	return (this->c.begin());
}

template< typename T >
typename MutantStack< T >::iterator	MutantStack< T >::end( void ) {
	return	(this->c.end());
}