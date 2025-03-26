/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:51:36 by llarue            #+#    #+#             */
/*   Updated: 2025/03/26 14:54:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char **argv )
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [arguments to sort]" << std::endl;
		return (1);
	}

	try {
		if ( argc > 2 ) {
			PmergeMe< std::deque< int > > dequeSequence( argv );
			PmergeMe< std::vector< int > > vectorSequence( argv );

			std::cout << "Before : " << dequeSequence << std::endl;
			dequeSequence.sort();
			vectorSequence.sort();
			std::cout << "After : " << dequeSequence << std::endl;

			dequeSequence.sort_time();
			vectorSequence.sort_time();
		}
		else
			throw "Too few arguments";
	}
	catch( ... ) {
		std::cerr << "Too few arguments" << std::endl;
	}
	
	return (0);
}
