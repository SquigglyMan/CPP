/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:37:14 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 10:34:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template<typename T>
void	printArrayElements( T &i ) {
	std::cout << i << std::endl;
}

template<typename T>
void	addOneToArrayElements( T &i ) {
	i = i + 1;
}

int	main( void ) 
{
	{
		std::cout << MAGENTA << "----- PrintArrayElements : int array -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		
		int	array[] = { 1, 2 , 3, 4, 5, 6 };
		int	size = 6;

		std::cout << "\t" << "Printing array elements" << std::endl;

		iter(array, size, printArrayElements);

		std::cout << std::endl;

		std::cout << "\t" << "Adding one to every element of array" << std::endl;

		iter(array, size, addOneToArrayElements);
		iter(array, size, printArrayElements);

		std::cout << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- PrintArrayElements : char array -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		
		char	array[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
		int		size = 6;

		std::cout << "\t" << "Printing array elements" << std::endl;

		iter(array, size, printArrayElements);

		std::cout << std::endl;

		std::cout << "\t" << "Adding one to every element of array" << std::endl;

		iter(array, size, addOneToArrayElements);
		iter(array, size, printArrayElements);

		std::cout << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- PrintArrayElements : float array -----" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		
		float	array[] = { 42.05f, 1.056, 33.084, 73.712, 28.890, 70.098 };
		int		size = 6;

		std::cout << "\t" << "Printing array elements" << std::endl;

		iter(array, size, printArrayElements);

		std::cout << std::endl;

		std::cout << "\t" << "Adding one to every element of array" << std::endl;

		iter(array, size, addOneToArrayElements);
		iter(array, size, printArrayElements);

		std::cout << std::endl;
	}
	std::cout << "}" << std::endl;
	return (0);
}