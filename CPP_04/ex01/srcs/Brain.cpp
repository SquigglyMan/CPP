/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:56:55 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 17:26:58 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << PINK << "Brain default constructor" << COLOR_RESET << std::endl;
}

Brain::Brain( const Brain& src ) {
	std::cout << PINK << "Brain copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Brain& Brain::operator=( const Brain& src ) {
	std::cout << PINK << "Brain copy assingment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << PINK << "Brain default destructor" << COLOR_RESET << std::endl;
}
