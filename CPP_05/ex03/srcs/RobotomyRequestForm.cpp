/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:05 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 14:19:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) {
	srand(time(NULL));
	std::cout << ORANGE << "RobotomyRequestForm Default constructor" << COLOR_RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm(src) {
	std::cout << BLUE << "RobotomyRequestForm Copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45) {
	srand(time(NULL));
	std::cout << PURPLE << "RobotomyRequestForm Parameter constructor" << COLOR_RESET << std::endl;
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << ORANGE << "RobotomyRequestForm Default destructor" << COLOR_RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const & src ) {
	std::cout << GREEN << "RobotomyRequestForm copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}

void	RobotomyRequestForm::executeForm( void ) const {
	int	robotomySuccessRate = rand() % 2;

	std::cout << "Brrrrrrr... Brrrrr..." << std::endl;
	if (!robotomySuccessRate)
		std::cout << this->_target << "'s robotomy has failed" << std::endl;
	else
		std::cout << this->_target << " has been robotomized" << std::endl;
}
