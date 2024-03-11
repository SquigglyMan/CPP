/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:52 by llarue            #+#    #+#             */
/*   Updated: 2024/03/09 22:40:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(), _signed(false), _signRequirement(75), _executeRequirement(25) {
	std::cout << "Form default constructor" << std::endl;
}

Form::Form( const Form & src ) {
	std::cout << "Form copy constructor" << std::endl;
	*this = src;
}

Form::~Form( void ) {
	std::cout << "Form default destructor" << std::endl;
}

Form& Form::operator=( const Form & src ) {
	if (this != &src)
	{
		this->_signed = src._signed;
		this->_signRequirement= src._signRequirement;
		this->_executeRequirement = src._executeRequirement;
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

void	Form::( Bureaucrat & src ) {
	if (src.getGrade() < )
}