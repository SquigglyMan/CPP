/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:10:10 by llarue            #+#    #+#             */
/*   Updated: 2025/01/12 19:23:35 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(0), _span(0), _isSorted(false) {
	std::cout << ORANGE << "Span default constructor" << COLOR_RESET << std::endl;
}

Span::Span( unsigned int N ) : _N(N), _span(0), _isSorted(false) {
	std::cout << PURPLE << "Span paremeter constructor" << COLOR_RESET << std::endl;
}

Span::Span( const Span &src ) {
	std::cout << BLUE << "Span copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Span	&Span::operator=( const Span & src ) {
	std::cout << GREEN << "Span copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_N = src._N;
		this->_isSorted = src._isSorted;
	}
	return (*this);
}

Span::~Span( void ) {
	std::cout << ORANGE << "Span default destructor" << COLOR_RESET << std::endl;
}

void	Span::addNumber( int n ) {
	if ((_span.size() + 1) > _N)
		throw (Span::TooManyElementsException());
	_isSorted = false;
	_span.push_back(n);
}

void	Span::addNumber( std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd ) {
	if (_span.size() > _N )
		throw (Span::NotEnoughElementsException());
	_isSorted = false;
	_span.insert(_span.end(), itBegin, itEnd);
}

unsigned int	Span::shortestSpan( void ) {
	if (_span.empty() || _span.size() == 1)
		throw (Span::NotEnoughElementsException());
	if (_isSorted == false)
	{
		_span.sort();
		_isSorted = true;
	}
	std::list<int>::iterator i = _span.begin();
	return (*(++i) - _span.front());
}

unsigned int	Span::longestSpan( void ) {
	if (_span.empty() || _span.size() == 1)
		throw(Span::NotEnoughElementsException());
	if (_isSorted == false)
	{
		_span.sort();
		_isSorted = true;
	}
	return (*std::max_element(_span.begin(), _span.end()) - *std::min_element(_span.begin(), _span.end()));
}

const char*	Span::TooManyElementsException::what() const throw() {
	return ("Too many elements");
}

const char*	Span::NotEnoughElementsException::what() const throw() {
	return ("Not enough elements");
}