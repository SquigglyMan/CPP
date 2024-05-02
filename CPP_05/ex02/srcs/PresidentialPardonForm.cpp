/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:07 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 11:53:27 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {
	std::cout << ORANGE << "PresidentialPardonForm Default constructor" << COLOR_RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm(src) {
	std::cout << BLUE << "PresidentialPardonForm Copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << PURPLE << "PresidentialPardonForm Parameter constructor" << COLOR_RESET << std::endl;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << ORANGE << "PresidentialPardonForm Default destructor" << COLOR_RESET << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const & src ) {
	std::cout << GREEN << "PresidentialPardonForm copy assignment operator"  << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->target = src.target;
	}
	return (*this);
}

void	PresidentialPardonForm::executeForm( void ) const {
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}