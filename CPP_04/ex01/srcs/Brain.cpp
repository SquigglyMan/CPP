/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:56:55 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 17:11:14 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain( const Brain& src ){
	*this = src;
}

Brain& Brain::operator=( const Brain& src ){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor" << std::endl;
}
