/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:49:30 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 15:04:14 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array( void ) : _arraySize(0) {
	std::cout << ORANGE << "Array default constructor" << COLOR_RESET << std::endl;
	_array = new T[0];
}

template<typename T>
Array<T>::Array( Array const & src ) : _arraySize(0) {
	std::cout << BLUE << "Array copy constructor" << COLOR_RESET << std::endl;
	_array = new T[0];
	*this = src;
}

template<typename T>
Array<T>::Array( unsigned int n ) {
	std::cout << PURPLE << "Array parameter constructor" << COLOR_RESET << std::endl;
	_array = new T[n];
	_arraySize = n;
	for (unsigned int i = 0; i < _arraySize; i++)
		_array[i] = 0;
}

template<typename T>
Array<T>::~Array( void ) {
	std::cout << ORANGE << "Array default destructor" << COLOR_RESET << std::endl;
	delete[] (_array);
}

template<typename T>
Array<T>	&Array<T>::operator=( Array const & src ) {
	std::cout << GREEN << "Array copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src) {
		for (unsigned int i = 0; i < this->_arraySize; i++)
				this->_array[i] = src._array[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[]( unsigned int index ) {
	if (index >= _arraySize) 
		throw (std::out_of_range("Index out of range"));
	return (_array[index]);
}

template<typename T>
unsigned int	Array<T>::size( void ) const {
	return (_arraySize);
}