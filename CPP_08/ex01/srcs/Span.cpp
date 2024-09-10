/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:10:10 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 16:36:18 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {
	std::cout << ORANGE << "Span default constructor" << COLOR_RESET << std::endl;
}

Span::Span( const Span &src ) {
	std::cout << BLUE << "Span copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Span	&Span::operator=( const Span & src ) {
	std::cout << GREEN << "Span copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
		this->_N = src._N;
	return (*this);
}

Span::~Span( void ) {
	std::cout << ORANGE << "Span default destructor" << COLOR_RESET << std::endl;
}

Span::Span( unsigned int N ) : _N(N) {
	std::cout << PURPLE << "Span paremeter constructor" << COLOR_RESET << std::endl;
}

void	Span::addNumber( int n ) {
	_N += n;
}

unsigned int	Span::shortestSpan( void ) {
	return (0);
}

unsigned int	Span::longestSpan( void ) {
	return (0);
}