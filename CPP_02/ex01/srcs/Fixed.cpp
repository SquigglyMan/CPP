/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:24 by llarue            #+#    #+#             */
/*   Updated: 2024/01/12 16:21:48 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : integer(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int FixedPoint ) : integer(FixedPoint << fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float FloatingPoint) : integer(roundf (FloatingPoint * (1 << fractional_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &src ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->integer = src.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void	Fixed::setRawBits( int const raw ) {
	this->integer = raw;
}

float	Fixed::toFloat( void ) const  {
	return ((float)(this->integer) / (float)(1 << fractional_bits));
}

int	Fixed::toInt( void ) const  {
	return (this->integer >> fractional_bits);
}

std::ostream & operator<<( std::ostream &stream, Fixed const &f ) {
	stream << f.toFloat();
	return (stream);
}