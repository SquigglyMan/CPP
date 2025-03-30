/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:51:36 by llarue            #+#    #+#             */
/*   Updated: 2025/03/30 15:35:14 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char **argv )
{
	if ( argc < 2 )
	{
		std::cout << "Usage: ./PmergeMe [arguments to sort]" << std::endl;
		return ( 1 );
	}

	try {
		if ( argc > 2 ) {
			PmergeMe< std::deque< int > > dequeSequence( argv );
			PmergeMe< std::vector< int > > vectorSequence( argv );

			std::cout << "Before : " << dequeSequence << std::endl;
			dequeSequence.sort();
			vectorSequence.sort();
			std::cout << "After : " << dequeSequence << std::endl;

			dequeSequence.sortTime();
			vectorSequence.sortTime();
		}
	}
	catch ( std::exception &e ) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	return ( 0 );
}
