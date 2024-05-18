/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:52 by llarue            #+#    #+#             */
/*   Updated: 2024/05/03 14:59:22 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(), _signRequirement(75), _executeRequirement(25), _signed(false) {
	std::cout << ORANGE << "Form default constructor" << COLOR_RESET << std::endl;
}

Form::Form( const std::string _name, const int _signRequirement, const int _executeRequirement ) : _name(_name), _signRequirement(_signRequirement), _executeRequirement(_executeRequirement) {
	std::cout << PURPLE << "Form parameter constructor" << COLOR_RESET << std::endl;
	_signed = false;
}

Form::Form( const Form & src ) : _name(src._name), _signRequirement(src._signRequirement), _executeRequirement(src._executeRequirement) {
	std::cout << BLUE << "Form copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

Form::~Form( void ) {
	std::cout << ORANGE << "Form default destructor" << COLOR_RESET << std::endl;
}

Form& Form::operator=( const Form & src ) {
	std::cout << GREEN << "Form copy assignment operator" COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return (*this);
}

std::string Form::getName( void ) {
	return (this->_name);
}

int	Form::getSignRequirement( void ) {
	return (this->_signRequirement);
}

int	Form::getExecutionRequirement( void ) {
	return (this->_executeRequirement);
}

bool	Form::getSignStatus( void ) {
	return (this->_signed);
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

void	Form::beSigned( Bureaucrat & src ) {
	if (src.getGrade() < getSignRequirement())
		_signed = true;
	else if (src.getGrade() < getSignRequirement())
		throw Form::GradeTooLowException();
;
}

void	Form::setSignStatus( bool signStatus ) {
	this->_signed = signStatus;
}

std::ostream&	operator<<( std::ostream& stream, Form& src ) {
	stream << "\tForm\t\t\t\t: " << src.getName() << std::endl;
	stream << "\tRequired grade to sign\t\t: " << src.getSignRequirement() << std::endl;
	stream << "\tRequired grade to execute\t: " << src.getExecutionRequirement() << std::endl;
	stream << "\tForm sign status\t\t: " << (src.getSignStatus() ? "signed" : "unsigned") << std::endl;
	return (stream);
}
