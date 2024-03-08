/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:01:04 by llarue            #+#    #+#             */
/*   Updated: 2024/03/08 11:39:38 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name(), grade(150) {
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : name(name), grade(grade) {
	std::cout << "Bureaucrat parameter constructor" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const& src ) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& src ) {
	std::cout << "Bureacrat copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->grade = src.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat default destructor" << std::endl;
}

int	Bureaucrat::getGrade( void ) {
	return (this->grade);
}

std::string Bureaucrat::getName( void ) {
	return (this->name);
}
