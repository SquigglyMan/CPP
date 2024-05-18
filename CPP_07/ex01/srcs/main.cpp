/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:37:14 by llarue            #+#    #+#             */
/*   Updated: 2024/05/17 14:55:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template<typename T>
void	printArrayElements( T &i ) {
	std::cout << i << std::endl;
}

template<typename T>
void	addArrayElements( T &i ) {
	i += i + 1;
	std::cout << i << std::endl;
}

int	main( void ) {

	int	array[] = { 1, 2 , 3, 4, 5, 6 };
	int	size = 6;

	iter(array, size, printArrayElements);
	iter(array, size, addArrayElements);
	
	return (0);
}