/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:20 by llarue            #+#    #+#             */
/*   Updated: 2024/02/09 07:37:13 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed 		a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << std::endl;
		Fixed		a( 25.42f );
		Fixed const	b( Fixed( 42 ) * Fixed( -25.25f ));

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "a-- = " << a-- << std::endl;

		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
		std::cout << "a / 0 = " << a / 0 << std::endl;
		std::cout << "a / 0 = " << b / 0 << std::endl;

		Fixed		c( 25 );
		Fixed		d( 42 );
	
		std::cout << "min = " << Fixed::min(c, d) << std::endl;
		std::cout << "min = " << Fixed::min(d, c) << std::endl;
		std::cout << "max = " << Fixed::max(c, d) << std::endl;
		std::cout << "max = " << Fixed::max(d, c) << std::endl;

		std::cout << "min = " << Fixed::min(a, b) << std::endl;
		std::cout << "min = " << Fixed::min(b, a) << std::endl;
		std::cout << "max = " << Fixed::max(a, b) << std::endl;
		std::cout << "max = " << Fixed::max(b, a) << std::endl;
	}

	return (0);
}
