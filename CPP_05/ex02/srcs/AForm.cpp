/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:52 by llarue            #+#    #+#             */
/*   Updated: 2024/09/09 15:46:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name(), _signRequirement(150), _executeRequirement(150), _signed(false) {
	std::cout << ORANGE << "AForm default constructor" << COLOR_RESET << std::endl;
}

AForm::AForm( const std::string name, const unsigned int signRequirement, const unsigned int executeRequirement ) : _name(name), _signRequirement(signRequirement), _executeRequirement(executeRequirement) {
	std::cout << PURPLE << "AForm parameter constructor" << COLOR_RESET << std::endl;
	_signed = false;
}

AForm::AForm( const AForm & src ) : _name(src._name), _signRequirement(src._signRequirement), _executeRequirement(src._executeRequirement) {
	std::cout << BLUE << "AForm copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

AForm::~AForm( void ) {
	std::cout << ORANGE << "AForm default destructor" << COLOR_RESET << std::endl;
}

AForm& AForm::operator=( const AForm & src ) {
	std::cout << GREEN << "AForm copy assignment operator" COLOR_RESET << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string AForm::getName( void ) const {
	return (this->_name);
}

unsigned int	AForm::getSignRequirement( void ) const {
	return (this->_signRequirement);
}

unsigned int	AForm::getExecutionRequirement( void ) const {
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
void	AForm::setSignStatus( bool signStatus ) {
	this->_signed = signStatus;
}

void	AForm::execute( Bureaucrat const & executor ) const {
	if (this->getSignStatus() == false){
		std::cout <<"Cannot execute form. Form has not yet been signed" << std::endl;
		return ;		
	}
	if (executor.getGrade() <= this->getExecutionRequirement())
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		this->executeForm();
	}
	else
		std::cout << executor.getName() << "'s grade is too low to execute " << this->_name << std::endl;
		// throw (AForm::GradeTooLowException());
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream&	operator<<( std::ostream& stream, AForm& src ) {
	stream << "\tForm\t\t\t\t: " << src.getName() << std::endl;
	stream << "\tRequired grade to sign\t\t: " << src.getSignRequirement() << std::endl;
	stream << "\tRequired grade to execute\t: " << src.getExecutionRequirement() << std::endl;
	stream << "\tForm sign status\t\t: " << (src.getSignStatus() ? "signed" : "unsigned") << std::endl;
	return (stream);
}