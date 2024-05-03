/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:21:30 by llarue            #+#    #+#             */
/*   Updated: 2024/05/03 05:33:52 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << ORANGE << "Intern Default Constructor" << COLOR_RESET << std::endl;
	this->_forms[0] = new PresidentialPardonForm();
	this->_forms[1] = new RobotomyRequestForm();
	this->_forms[2] = new ShrubberyCreationForm();
}

Intern::Intern( Intern const & src ) {
	std::cout << BLUE << "Intern Copy constructor" << COLOR_RESET << std::endl;
	*this = src;

	this->_forms[0] = new PresidentialPardonForm();
	this->_forms[1] = new RobotomyRequestForm();
	this->_forms[2] = new ShrubberyCreationForm();
}

Intern::~Intern( void ) {
	std::cout << ORANGE << "Intern Default destructor" << COLOR_RESET << std::endl;
	delete (_forms[0]);
	delete (_forms[1]);
	delete (_forms[2]);
}

Intern	&Intern::operator=( Intern const & src ) {
	std::cout << ORANGE << "Internet default destructor" << COLOR_RESET << std::endl;
	(void)src;
	return (*this);
}

const char*	Intern::FormNotFound::what() const throw() {
	return ("Form not found");
}

AForm *Intern::makeForm( std::string formName, std::string target ) {
	std::cout << "Intern creates form " << formName << std::endl;
	std::string	forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	int	i;
	for (i = 0; i < 3 && formName != forms[i]; i++) {}
	if (i < 3)
		return (this->_forms[i]->cloneForm(target));
	throw Intern::FormNotFound();
	return (NULL);
}