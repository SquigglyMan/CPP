/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:52 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 14:02:04 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(), _signRequirement(150), _executeRequirement(150), _signed(false) {
	std::cout << ORANGE << "Form default constructor" << COLOR_RESET << std::endl;
}

Form::Form( const std::string name, const unsigned int signRequirement, const unsigned int executeRequirement ) : _name(name), _signRequirement(signRequirement), _executeRequirement(executeRequirement), _signed(false) {
	std::cout << PURPLE << "Form parameter constructor" << COLOR_RESET << std::endl;
	if (signRequirement < 1 || executeRequirement < 1)
		throw (Form::GradeTooHighException());
	if (signRequirement > 150 || executeRequirement > 150)
		throw (Form::GradeTooLowException());
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
	(void)src;
	return (*this);
}

std::string Form::getName( void ) {
	return (this->_name);
}

unsigned int	Form::getSignRequirement( void ) {
	return (this->_signRequirement);
}

unsigned int	Form::getExecutionRequirement( void ) {
	return (this->_executeRequirement);
}

bool	Form::getSignStatus( void ) {
	return (this->_signed);
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Form grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Form grade too low");
}

void	Form::beSigned( Bureaucrat & src ) {
	if (this->getSignStatus() == false) {
		if (src.getGrade() > getSignRequirement()) {
			std::cout << this->getName() << " couldn't be signed because the bureaucrat " << src.getName() << "'s grade is too low" << std::endl;
		}
		else {
			std::cout << src.getName() << " signed " << this->getName() << std::endl;
			this->setSignStatus(true);
		}
	}
	else
		std::cout << this->getName() << " couldn't be signed because it's already signed" << std::endl;


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