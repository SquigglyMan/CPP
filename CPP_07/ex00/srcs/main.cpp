/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:18:20 by llarue            #+#    #+#             */
/*   Updated: 2024/05/07 11:35:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int	main( void ) {
	{
		int	x;
		int	y;

		x = 10;
		y = 5;

		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "swap" << std::endl;
		swap(x, y);
		
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "min = " << min(x, y) << std::endl;
		std::cout << "max = " << max(x, y) << std::endl;
	}
	{
		char	a;
		char	b;

		a = 'r';
		b = 'n';
		
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "swap" << std::endl;
		swap(a, b);
		
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
	}
	{
		double	x;
		double	y;

		x = 3.6;
		y = 4.2;

		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "swap" << std::endl;
		swap(x, y);
		
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
		
		std::cout << "min = " << min(x, y) << std::endl;
		std::cout << "max = " << max(x, y) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}