/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:25:42 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 15:21:34 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "Base.hpp"

int	main( void ) 
{
	srand(time(NULL));
	{
		std::cout << MAGENTA << "----- Simple identification -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		
		Base*   a = generate();
		Base*   b = generate();
		Base*   c = generate();
		Base*   d = generate();

		std::cout << "\t" << "generate" << std::endl;
		std::cout << "\t" << "a* = "; identify( a );
		std::cout << "\t" << "a& = "; identify( *a ); std::cout << std::endl;

		std::cout << "\t" << "b* = "; identify( b );
		std::cout << "\t" << "b& = "; identify( *b ); std::cout << std::endl;

		std::cout << "\t" << "c* = "; identify( c );
		std::cout << "\t" << "c& = "; identify( *c ); std::cout << std::endl;

		std::cout << "\t" << "d* = "; identify( d );
		std::cout << "\t" << "d& = "; identify( *d ); std::cout << std::endl;

		delete a;
		delete b;
		delete c;
		delete d;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Unknown type -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Base	a;

		std::cout << "\t" << "a* = "; identify( &a );
		std::cout << "\t" << "a& = "; identify( a ); std::cout << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Failed dynamic cast -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Base	a;
		Base&	ref = a;

		std::cout << "\t" << "&a = ";
		identify( ref );
		std::cout << std::endl;
	}
	std::cout << "}" << std::endl;
	
	return (0);
}