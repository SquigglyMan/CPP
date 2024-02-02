/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:00:13 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 15:37:24 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {
	std::cout << PURPLE << "Default constructor called" << COLOR_RESET << std::endl;
}

Fixed::Fixed( const Fixed& src ) {
	std::cout << PURPLE << "Copy constructor called" << COLOR_RESET << std::endl;
	*this = src;
}

Fixed& Fixed::operator=( const Fixed &src ) {
	std::cout << PURPLE << "Copy assignment operator called" << COLOR_RESET << std::endl;
	if (this != &src)
		this->fixedPoint = src.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << PURPLE << "Default destructor called" << COLOR_RESET << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << ORANGE << "getRawBits member function called" << COLOR_RESET << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}
