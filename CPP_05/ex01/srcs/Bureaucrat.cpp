/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:01:04 by llarue            #+#    #+#             */
/*   Updated: 2024/05/03 14:13:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name(), _grade(150) {
	std::cout << ORANGE << "Bureaucrat default constructor" << COLOR_RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << PURPLE << "Bureaucrat parameter constructor" << COLOR_RESET << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat( Bureaucrat const& src ) {
	std::cout << BLUE << "Bureaucrat copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& src ) {
	std::cout << GREEN << "Bureacrat copy assignment operator" COLOR_RESET << std::endl;
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << ORANGE << "Bureaucrat default destructor" << COLOR_RESET << std::endl;
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

std::string Bureaucrat::getName( void ) const {
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

void	Bureaucrat::signForm( Form & src ) {
	if (src.getSignStatus() == false) {
		if (this->_grade > src.getSignRequirement()) {
			std::cout << this->getName() << " couldn't sign " << src.getName() << " because" << std::endl;
			throw (Bureaucrat::GradeTooLowException());
		}
		else {
			std::cout << this->getName() << " signed " << src.getName() << std::endl;
			src.setSignStatus(true);
		}
	}
	else
		std::cout << src.getName() << " is already signed" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream&	operator<<( std::ostream& stream, Bureaucrat& src ) {
	stream << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (stream);
}
