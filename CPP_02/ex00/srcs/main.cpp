/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:52 by llarue            #+#    #+#             */
/*   Updated: 2024/02/09 06:56:40 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed	a;
		Fixed	b( a );
		Fixed	c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{
		std::cout << std::endl;
		Fixed	a;
		Fixed	b( a );
		Fixed	c;

		c = b;
		
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;

		b.setRawBits(25);
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	return (0);
}
