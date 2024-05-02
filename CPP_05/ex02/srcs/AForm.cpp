/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:52 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 11:11:23 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name(), _signRequirement(75), _executeRequirement(25), _signed(false) {
	std::cout << ORANGE << "Form default constructor" << COLOR_RESET << std::endl;
}

AForm::AForm( const std::string _name, const int _signRequirement, const int _executeRequirement ) : _name(_name), _signRequirement(_signRequirement), _executeRequirement(_executeRequirement) {
	std::cout << PURPLE << "Form parameter constructor" << COLOR_RESET << std::endl;
	_signed = false;
}

AForm::AForm( const AForm & src ) : _name(src._name), _signRequirement(src._signRequirement), _executeRequirement(src._executeRequirement) {
	std::cout << BLUE << "Form copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

AForm::~AForm( void ) {
	std::cout << ORANGE << "Form default destructor" << COLOR_RESET << std::endl;
}

AForm& AForm::operator=( const AForm & src ) {
	std::cout << GREEN << "Form copy assignment operator" COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return (*this);
}

std::string AForm::getName( void ) const {
	return (this->_name);
}

int	AForm::getSignRequirement( void ) const {
	return (this->_signRequirement);
}

int	AForm::getExecutionRequirement( void ) const {
	return (this->_executeRequirement);
}

bool	AForm::getSignStatus( void ) const {
	return (this->_signed);
}

void	AForm::beSigned( Bureaucrat & src ) {
	if (src.getGrade() < getSignRequirement())
		_signed = true;
	else if (src.getGrade() < getSignRequirement())
		std::cout << "Grade is too low to sign" << std::endl;
}
void	AForm::setSignStatus( bool _signed ) {
	this->_signed = _signed;
}

void	AForm::execute( Bureaucrat const & executor ) const {
	if (executor.getGrade() <= this->getExecutionRequirement())
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		this->executeForm();
	}
}