/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:10:40 by llarue            #+#    #+#             */
/*   Updated: 2025/01/14 16:29:04 by llarue           ###   ########.fr       */
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
	*this = src;
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

template< typename T >
typename MutantStack< T >::iterator	MutantStack< T >::cbegin( void ) {
	return	(this->c.cbegin());
}

template< typename T >
typename MutantStack< T >::iterator	MutantStack< T >::cend( void ) {
	return	(this->c.cend());
}