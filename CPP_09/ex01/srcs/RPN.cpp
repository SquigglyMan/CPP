/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:24:24 by llarue            #+#    #+#             */
/*   Updated: 2025/04/04 16:25:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) : std::stack<int>() {
	// std::cout << "RPN default constructor called" << std::endl;
}

RPN::RPN( RPN const & src ) : std::stack<int>(src) {
	// std::cout << "RPN copy constructor called" << std::endl;
	*this = src;
}

RPN::~RPN( void ) {
	// std::cout << "RPN destructor called" << std::endl;
}

RPN &RPN::operator=( RPN const & src ) {
	// std::cout << "RPN assignation operator called" << std::endl;
	if (this != &src)
		std::stack<int>::operator=(src);
	return *this;
}

bool	RPN::calculate( char input ) {
	if (this->empty()) {
		std::cerr << "Error: Stack is empty" << std::endl;
		return false;
	}
	int a = this->top();
	this->pop();
	if (this->empty()) {
		std::cerr << "Error: Missing second variable for operation" << std::endl;
		return false;
	}
	int b = this->top();
	this->pop();

	void	(RPN::*operations[4])( int, int ) = { &RPN::add, &RPN::sub, &RPN::mul, &RPN::div };
	for (int i = 0; i < 4; i++) {
		if (input == "+-*/"[i]) {
			if (input == '/' && a == 0) {
				std::cerr << "Error: Division by zero" << std::endl;
				return false;
			}
			(this->*operations[i])(a, b);
			return true;
			}
	}
	std::cerr << "Error" << std::endl;
	return false;
}

void		RPN::add( int a, int b ) {
	this->push(a + b);
}

void		RPN::sub( int a, int b ) {
	this->push(b - a);
}

void		RPN::mul( int a, int b ) {
	this->push(a * b);
}

void		RPN::div( int a, int b ) {
	this->push(b / a);
}