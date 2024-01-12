/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:00:13 by llarue            #+#    #+#             */
/*   Updated: 2024/01/12 15:47:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed() : integer(0) {
	std::cout << "Default constructor called" << std::endl;
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

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void	Fixed::setRawBits( int const raw ) {
	this->integer = raw;
}
