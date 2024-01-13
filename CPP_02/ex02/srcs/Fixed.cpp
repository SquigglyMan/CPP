/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:24 by llarue            #+#    #+#             */
/*   Updated: 2024/01/13 11:26:58 by llarue           ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed& comp) const {
	return (this->integer > comp.getRawBits());
}

bool	Fixed::operator<(const Fixed& comp) const {
	return (this->integer < comp.getRawBits());
}

bool	Fixed::operator>=(const Fixed& comp) const {
	return (this->integer >= comp.getRawBits());
}

bool	Fixed::operator<=(const Fixed& comp) const {
	return (this->integer <= comp.getRawBits());
}

bool	Fixed::operator==(const Fixed& comp) const {
	return (this->integer == comp.getRawBits());
}

bool	Fixed::operator!=(const Fixed& comp) const {
	return (this->integer != comp.getRawBits());
}

Fixed	Fixed::operator+(const Fixed	&op) const {
	return Fixed( this->toFloat() + op.toFloat() );
}

Fixed	Fixed::operator-(const Fixed	&op) const {
	return Fixed( this->toFloat() - op.toFloat() );
}

Fixed	Fixed::operator*(const Fixed	&op) const {
	return Fixed( this->toFloat() * op.toFloat() );	
}

Fixed	Fixed::operator/(const Fixed	&op) const {
	return Fixed( this->toFloat() / op.toFloat() );
}


Fixed&	Fixed::operator++( void ) {
	++this->integer;
	return (*this);	
}

Fixed	Fixed::operator++( int ) {
	Fixed tmp (*this);
	tmp.integer = this->integer++;
	return (tmp);	
}

Fixed&	Fixed::operator--( void ) {
	--this->integer;
	return (*this);	
}

Fixed	Fixed::operator--( int ) {
	Fixed tmp (*this);
	tmp.integer = this->integer--;
	return (tmp);	
}

std::ostream & operator<<( std::ostream &stream, Fixed const &f ) {
	stream << f.toFloat();
	return (stream);
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
	// return (a.getRawBits() < b.getRawBits() ? a.getRawBits() : b.getRawBits());
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
	// return (a.getRawBits() < b.getRawBits() ? a.getRawBits() : b.getRawBits());
}

Fixed&	Fixed::max( Fixed &a, Fixed &b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
	// return (a.getRawBits() > b.getRawBits() ? a.getRawBits() : b.getRawBits());
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
	// return (a.getRawBits() > b.getRawBits() ? a.getRawBits() : b.getRawBits());
}
