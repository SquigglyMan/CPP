/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:14:42 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 15:05:27 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#define MAX_VAL	750

int	main( void ) 
{
	{
		std::cout << MAGENTA << "----- Main provided -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Array default constructor -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Array<int>	intArray;

		std::cout << "\t" << "intArray.size() = " << intArray.size() << std::endl << std::endl;

		std::cout << "\t" << "Try & catch accessing array values" << std::endl;
		
		try {
			std::cout << "\t" << "intArray[2] = " << intArray[2] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << std::endl;
	
		std::cout << "\t" << "Try & catch changing array values" << std::endl;
		
		try {
			std::cout << "\t" << "Assign 13 to index 2" << std::endl;
			intArray[2] = 13;
		}
		catch (std::exception & e) {
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Simple array of int -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Array<int>	intArray(5);

		std::cout << "\t" << "intArray[4] = " << intArray[4] << std::endl;
		std::cout << "\t" << "intArray.size() = " << intArray.size() << std::endl << std::endl;
		std::cout << "\t" << "Assign 13 to index 1" << std::endl;
		intArray[1] = 13;
		std::cout << "\t" << "intArray[1] = " << intArray[1] << std::endl << std::endl;

		std::cout << "\t" << "Assign random number to each index" << std::endl;
		
		srand(time(NULL));
		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			const int value = rand() % 13;
			intArray[i] = value;
		}
		
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << "\t" << "intArray[" << i << "] = " << intArray[i] << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Try & catch accessing values out of bounds" << std::endl;
		
		try {
			std::cout << "\t" << "intArray[9] = " << intArray[9] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << std::endl;
	
		std::cout << "\t" << "Try & catch changing values out of bounds" << std::endl;
		
		try {
			std::cout << "\t" << "Assign 13 to index 9" << std::endl;
			intArray[9] = 13;
		}
		catch (std::exception & e) {
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
	}
	{
		std::cout << MAGENTA << "----- Complex array of floats -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Array<float>	floatArray(13);

		std::cout << "\t" << "floatArray[4] = " << floatArray[4] << std::endl;
		std::cout << "\t" << "floatArray.size() = " << floatArray.size() << std::endl << std::endl;
		std::cout << "\t" << "Assign 13.98f to index 1" << std::endl;
		floatArray[1] = 13.98f;
		std::cout << "\t" << "floatArray[1] = " << floatArray[1] << std::endl << std::endl;
	}
	{
		std::cout << MAGENTA << "----- Complex array of char -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Array<char>	stringArray(13);

		std::cout << "\t" << "stringArray[4] = " << stringArray[4] << std::endl;
		std::cout << "\t" << "stringArray.size() = " << stringArray.size() << std::endl << std::endl;
		std::cout << "\t" << "Assign 13.98f to index 1" << std::endl;
		stringArray[1] = 'T';
		std::cout << "\t" << "stringArray[1] = " << stringArray[1] << std::endl << std::endl;
	}
	std::cout << "}" << std::endl;
	return (0);
}