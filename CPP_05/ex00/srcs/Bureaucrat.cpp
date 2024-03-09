/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:01:04 by llarue            #+#    #+#             */
/*   Updated: 2024/03/09 14:21:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name(), _grade(150) {
	std::cout << ORANGE << "Bureaucrat default constructor" << COLOR_RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << PURPLE << "Bureaucrat parameter constructor" << COLOR_RESET << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const& src ) {
	std::cout << BLUE << "Bureaucrat copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& src ) {
	std::cout << GREEN << "Bureacrat copy assignment operator" COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_grade = src._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << ORANGE << "Bureaucrat default destructor" << COLOR_RESET << std::endl;
}

int	Bureaucrat::getGrade( void ) {
	return (this->_grade);
}

std::string Bureaucrat::getName( void ) {
	return (this->_name);
}

void	Bureaucrat::incrementGrade( void ) {
	if (_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void ) {
	if (_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

std::ostream&	operator<<( std::ostream& stream, Bureaucrat& src ) {
	stream << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (stream);
}