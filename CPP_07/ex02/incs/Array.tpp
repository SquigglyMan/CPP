/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:49:30 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 10:35:57 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array( void ) : _arraySize(0) {
	std::cout << ORANGE << "Array default constructor" << COLOR_RESET << std::endl;
	_array = new T[0];
}

template<typename T>
Array<T>::Array( Array const & src ) {
	std::cout << BLUE << "Array copy constructor" << COLOR_RESET << std::endl;
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
		this->elements = src->elements;
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