/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:39:36 by llarue            #+#    #+#             */
/*   Updated: 2024/12/29 18:45:29 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {
	// std::cout << "PmergeMe default constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe( PmergeMe const & src ) {
	// std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = src;
	return ;
}

PmergeMe::~PmergeMe( void ) {
	// std::cout << "PmergeMe destructor called" << std::endl;
	return ;
}

PmergeMe	&PmergeMe::operator=( PmergeMe const & src ) {
	(void)src;
	return *this;
}

PmergeMe::PmergeMe( char** argv ) {
	std::string input;
	
	for (int i = 1; argv[i]; i++) {
		input = argv[i];
		_vector.push_back(atoi(input.c_str()));
		_list.push_back(atoi(input.c_str()));
	}
}

void		PmergeMe::printContainerElement( void ) {
	for (size_t i = 0; i < _vector.size(); i++) {
		std::cout << _vector[i] << " ";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < _list.size(); i++) {
		std::cout << _vector[i] << " ";
	}
}
