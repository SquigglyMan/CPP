/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/05/03 17:49:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	{
		std::cout << std::endl << """---------- AForm instantiation ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		// std::cout << "\t";
		
		// AForm	form;
		// to be uncommented for testing but will result in compilation error
		// because AForm is an abstract class
		// std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << """---------- ShrubberyCreationForm  ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";
	
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	return (0);
}
