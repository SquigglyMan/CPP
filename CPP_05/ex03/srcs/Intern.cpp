/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:21:30 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 15:08:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << ORANGE << "Intern Default Constructor" << COLOR_RESET << std::endl;
	// this->_forms[0] = new PresidentialPardonForm();
	// this->_forms[1] = new RobotomyRequestForm();
	// this->_forms[2] = new ShrubberyCreationForm();
}

Intern::Intern( Intern const & src ) {
	std::cout << BLUE << "Intern Copy constructor" << COLOR_RESET << std::endl;
	*this = src;

	// this->_forms[0] = new PresidentialPardonForm();
	// this->_forms[1] = new RobotomyRequestForm();
	// this->_forms[2] = new ShrubberyCreationForm();
}

Intern::~Intern( void ) {
	std::cout << ORANGE << "Intern Default destructor" << COLOR_RESET << std::endl;
	// delete (_forms[0]);
	// delete (_forms[1]);
	// delete (_forms[2]);
}

Intern	&Intern::operator=( Intern const & src ) {
	std::cout << ORANGE << "Internet default destructor" << COLOR_RESET << std::endl;
	(void)src;
	return (*this);
}

const char*	Intern::FormNotFound::what() const throw() {
	return ("Form not found");
}

AForm	*makeShrubberyCreationForm( std::string target ) {
	return (new ShrubberyCreationForm(target));
}

AForm	*makeRobotomyRequestForm( std::string target ) {
	return (new RobotomyRequestForm(target));
}

AForm	*makePresidentialPardonForm( std::string target ) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm( std::string formName, std::string target ) {
	std::cout << "Intern creates " << formName << std::endl;
	AForm	*(*f[3])( std::string ) = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
	std::string	forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	int	i;

	for (i = 0; i < 3; i++) {
		if (forms[i] == formName)
			return (f[i](target));
	}
	throw Intern::FormNotFound();
	return (NULL);
}