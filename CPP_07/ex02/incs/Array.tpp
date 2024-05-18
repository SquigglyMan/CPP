/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:49:30 by llarue            #+#    #+#             */
/*   Updated: 2024/05/18 10:43:34 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array( void ) {
	std::cout << ORANGE << "Array default constructor" << COLOR_RESET << std::endl;
	array = new T[0];
	arraySize = 0;
}

template<typename T>
Array<T>::Array( Array const & src ) {
	std::cout << BLUE << "Array copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

template<typename T>
Array<T>::Array( unsigned int n ) {
	std::cout << PURPLE << "Array parameter constructor" << COLOR_RESET << std::endl;
	array = new T[n];
	arraySize = n;
	for (unsigned int i = 0; i < arraySize; i++)
		array[i] = 0;
}

template<typename T>
Array<T>::~Array( void ) {
	std::cout << ORANGE << "Array default destructor" << COLOR_RESET << std::endl;
	delete[] (array);
}

template<typename T>
Array<T>	&Array<T>::operator=( Array const & src ) {
	std::cout << GREEN << "Array copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src) {
		this->elements = src->elements;
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[]( unsigned int index ) {
	if (index >= arraySize) 
		throw (std::out_of_range("Index out of range"));
	return (array[index]);
}

template<typename T>
unsigned int	Array<T>::size( void ) const {
	return (arraySize);
}