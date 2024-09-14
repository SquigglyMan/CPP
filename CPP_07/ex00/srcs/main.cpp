/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:18:20 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 10:21:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int	main( void ) {
	{
		std::cout << MAGENTA << "----- Swap & Min/Max with ints -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		
		int	x;
		int	y;

		x = 13;
		y = 25;

		std::cout << "\t" << "x = " << x << std::endl;
		std::cout << "\t" << "y = " << y << std::endl << std::endl;

		std::cout << "\t" << "swap" << std::endl;
		swap(x, y);
		
		std::cout << "\t" << "x = " << x << std::endl;
		std::cout << "\t" << "y = " << y << std::endl << std::endl;

		std::cout << "\t" << "min = " << min(x, y) << std::endl;
		std::cout << "\t" << "max = " << max(x, y) << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Swap & Min/Max with char -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		char	a;
		char	b;

		a = 'T';
		b = 'S';
		
		std::cout << "\t" << "a = " << a << std::endl;
		std::cout << "\t" << "b = " << b << std::endl << std::endl;

		std::cout << "\t" << "swap" << std::endl;
		swap(a, b);
		
		std::cout << "\t" << "a = " << a << std::endl;
		std::cout << "\t" << "b = " << b << std::endl << std::endl;
		
		std::cout << "\t" << "min = " << min(a, b) << std::endl;
		std::cout << "\t" << "max = " << max(a, b) << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Swap & Min/Max with double -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		
		double	x;
		double	y;

		x = 3.6;
		y = 4.2;

		std::cout << "\t" << "x = " << x << std::endl;
		std::cout << "\t" << "y = " << y << std::endl << std::endl;

		std::cout << "\t" << "swap" << std::endl;
		swap(x, y);
		
		std::cout << "\t" << "x = " << x << std::endl;
		std::cout << "\t" << "y = " << y << std::endl << std::endl;
		
		std::cout << "\t" << "min = " << min(x, y) << std::endl;
		std::cout << "\t" << "max = " << max(x, y) << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Test given -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		int a = 2;
		int b = 3;
		
		::swap( a, b );
		std::cout << "\t" << "a = " << a << ", b = " << b << std::endl;
		std::cout << "\t" << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "\t" << "min( b, a ) = " << ::min( b, a ) << std::endl;
		std::cout << "\t" << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << "\t" << "max( b, a ) = " << ::max( b, a ) << std::endl << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "\t" << "c = " << c << ", d = " << d << std::endl;
		std::cout << "\t" << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "\t" << "min( d, c ) = " << ::min( d, c ) << std::endl;
		std::cout << "\t" << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "\t" << "max( d, c ) = " << ::max( d, c ) << std::endl;
	}
	std::cout << "}" << std::endl;
	return (0);
}