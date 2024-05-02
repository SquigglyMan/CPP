/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:21:30 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 12:00:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << ORANGE << "Intern Default Constructor" << COLOR_RESET << std::endl;
}

Intern::Intern( Intern const & src ) {
	std::cout << BLUE << "Intern Copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Intern::~Intern( void ) {
	std::cout << ORANGE << "Intern Default destructor" << COLOR_RESET << std::endl;
}

Intern	&Intern::operator=( Intern const & src ) {
	std::cout << ORANGE << "Internet default destructor" << COLOR_RESET << std::endl;	
	return (*this);
}

AForm *Intern::makeForm( std::string formName, std::string target ) {
	std::cout << "Intern creates form " << formName << std::endl;
	
}