/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:55:08 by llarue            #+#    #+#             */
/*   Updated: 2025/01/14 18:07:33 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void ) 
{
	{
		std::cout << MAGENTA << "----- Main ------" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		int	container[] = {324, 131, 13, 324, 3653};

		std::vector< int >	VContainer( container, container + sizeof( container ) / sizeof( int ));
		std::list< int >	LContainer( container, container + sizeof( container ) / sizeof( int ));

		std::cout << "\t" << "container elements" << std::endl << std::endl;
		
		for (int i = 0; i < 5; i++) {
			std::cout << "\t" << "container[" << i << "] = " << container[i] << std::endl;
		}
		
		std::cout << std::endl;

		std::cout << "\t" << "creating vector container" << std::endl;
		std::cout << "\t" << "creating list container" << std::endl;

		std::cout << std::endl << "\t" << "easyfind 13 in vector container : ";
		easyfind(VContainer, 13);
		std::cout << "\t" << "easyfind 14 in vector container : ";
		easyfind(VContainer, 14);
		std::cout << "\t" << "easyfind 13 in list container : ";
		easyfind(LContainer, 13);
		std::cout << "\t" << "easyfind 15 in list container : ";
		easyfind(LContainer, 15);
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Conntainer with all same element ------" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		int	container[] = {13, 13, 13, 13, 13};

		std::vector< int >	VContainer( container, container + sizeof( container ) / sizeof( int ));
		std::list< int >	LContainer( container, container + sizeof( container ) / sizeof( int ));

		std::cout << "\t" << "container elements" << std::endl << std::endl;
		
		for (int i = 0; i < 5; i++) {
			std::cout << "\t" << "container[" << i << "] = " << container[i] << std::endl;
		}
		
		std::cout << std::endl;

		std::cout << "\t" << "creating vector container" << std::endl;
		std::cout << "\t" << "creating list container" << std::endl;

		std::cout << std::endl << "\t" << "easyfind 13 in vector container : ";
		easyfind(VContainer, 13);
		std::cout << "\t" << "easyfind 14 in vector container : ";
		easyfind(VContainer, 14);
		std::cout << "\t" << "easyfind 13 in list container : ";
		easyfind(LContainer, 13);
		std::cout << "\t" << "easyfind 15 in list container : ";
		easyfind(LContainer, 15);
	}
	{
		std::cout << MAGENTA << "----- Empty container ------" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl << std::endl;
		
		int	container[] = {13, 13, 13, 13, 13};

		std::vector< int >	VContainer;
		std::list< int >	LContainer;

		std::cout << "\t" << "container elements" << std::endl << std::endl;
		
		for (int i = 0; i < 5; i++) {
			std::cout << "\t" << "container[" << i << "] = " << container[i] << std::endl;
		}
		
		std::cout << std::endl;

		std::cout << "\t" << "creating vector container" << std::endl;
		std::cout << "\t" << "creating list container" << std::endl;

		std::cout << std::endl << "\t" << "easyfind 13 in vector container : ";
		easyfind(VContainer, 13);
		std::cout << "\t" << "easyfind 14 in vector container : ";
		easyfind(VContainer, 14);
		std::cout << "\t" << "easyfind 13 in list container : ";
		easyfind(LContainer, 13);
		std::cout << "\t" << "easyfind 15 in list container : ";
		easyfind(LContainer, 15);
	}
	return (0);
}