/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:24 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 16:14:15 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : fixedPoint(0) {
	std::cout << PURPLE << "Default constructor called" << COLOR_RESET << std::endl;
}

Fixed::Fixed( const int fixedPoint ) : fixedPoint(fixedPoint << fractionalBits) {
	std::cout << PURPLE << "Int constructor called" << COLOR_RESET << std::endl;
}

Fixed::Fixed( const float floatingPoint ) : fixedPoint(roundf (floatingPoint * (1 << fractionalBits))) {
	std::cout << PURPLE << "Float constructor called" << COLOR_RESET << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
	std::cout << PURPLE << "Copy constructor called" << COLOR_RESET << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &src ) {
	std::cout << PURPLE << "Copy assignment operator called" COLOR_RESET << std::endl;
	if (this != &src)
		this->fixedPoint = src.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << PURPLE << "Default destructor called" << COLOR_RESET << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << ORANGE << "getRawBits member function called" << COLOR_RESET << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}

float	Fixed::toFloat( void ) const  {
	return ((float)(this->fixedPoint) / (float)(1 << fractionalBits));
}

int	Fixed::toInt( void ) const  {
	return (this->fixedPoint >> fractionalBits);
}

bool	Fixed::operator>( const Fixed& comp ) const {
	return (this->fixedPoint > comp.getRawBits());
}

bool	Fixed::operator<( const Fixed& comp ) const {
	return (this->fixedPoint < comp.getRawBits());
}

bool	Fixed::operator>=( const Fixed& comp ) const {
	return (this->fixedPoint >= comp.getRawBits());
}

bool	Fixed::operator<=( const Fixed& comp ) const {
	return (this->fixedPoint <= comp.getRawBits());
}

bool	Fixed::operator==( const Fixed& comp ) const {
	return (this->fixedPoint == comp.getRawBits());
}

bool	Fixed::operator!=( const Fixed& comp ) const {
	return (this->fixedPoint != comp.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &op ) const {
	return Fixed( this->toFloat() + op.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &op ) const {
	return Fixed( this->toFloat() - op.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &op ) const {
	return Fixed( this->toFloat() * op.toFloat() );	
}

Fixed	Fixed::operator/( const Fixed &op ) const {
	return Fixed( this->toFloat() / op.toFloat() );
}


Fixed&	Fixed::operator++( void ) {
	++this->fixedPoint;
	return (*this);	
}

Fixed	Fixed::operator++( int ) {
	Fixed tmp (*this);
	tmp.fixedPoint = this->fixedPoint++;
	return (tmp);	
}

Fixed&	Fixed::operator--( void ) {
	--this->fixedPoint;
	return (*this);	
}

Fixed	Fixed::operator--( int ) {
	Fixed tmp (*this);
	tmp.fixedPoint = this->fixedPoint--;
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
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max( Fixed &a, Fixed &b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b ) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
