/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/08 18:25:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	{
		std::cout << MAGENTA << std::endl << """----------\tAForm instantiation\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		// std::cout << "\t";
		
		// AForm	form;
		// to be uncommented for testing but will result in compilation error
		// because AForm is an abstract class
		// std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tShrubberyCreationForm Default Constructor\t----------" << COLOR_RESET << std::endl;
		std::cout << "{" << std::endl;
		std::cout << "\t";

		ShrubberyCreationForm	shrubberyForm;

		std::cout << "\t" << "Get shrubberyForm name : " << shrubberyForm.getName() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign requirement : " << shrubberyForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm execution requirement : " << shrubberyForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		shrubberyForm.setSignStatus(true);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm.setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "shrubberyForm beSigned : ";
		shrubberyForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(shrubberyForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tShruberryCreationForm Parameter Constructor\t----------" << COLOR_RESET << std::endl;
	
		std::cout << "{" << std::endl;
		std::cout << "\t";

		ShrubberyCreationForm	shrubberyForm("home");

		std::cout << "\t" << "Get shrubberyForm name : " << shrubberyForm.getName() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign requirement : " << shrubberyForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm execution requirement : " << shrubberyForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		shrubberyForm.setSignStatus(true);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm.setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "shrubberyForm beSigned : ";
		shrubberyForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(shrubberyForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tRobotomyRequestForm Default Constructor\t----------" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";

		RobotomyRequestForm	robotomyForm;

		std::cout << "\t" << "Get robotomyForm name : " << robotomyForm.getName() << std::endl;
		std::cout << "\t" << "Get robotomyForm sign requirement : " << robotomyForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyForm execution requirement : " << robotomyForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		robotomyForm.setSignStatus(true);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyForm.setSignStatus(false);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "robotomyForm beSigned : ";
		robotomyForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute robotomyForm" << std::endl;
		std::cout << "\t";
		robotomyForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(robotomyForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tRobotomyRequestForm Parameter Constructor\t----------" << COLOR_RESET << std::endl;
	
		std::cout << "{" << std::endl;
		std::cout << "\t";

		RobotomyRequestForm	robotomyForm("Person_1");

		std::cout << "\t" << "Get robotomyForm name : " << robotomyForm.getName() << std::endl;
		std::cout << "\t" << "Get robotomyForm sign requirement : " << robotomyForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyForm execution requirement : " << robotomyForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		robotomyForm.setSignStatus(true);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyForm.setSignStatus(false);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "robotomyForm beSigned : ";
		robotomyForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute robotomyForm" << std::endl;
		std::cout << "\t";
		robotomyForm.execute(bureaucratOne);
		std::cout << std::endl;
		robotomyForm.execute(bureaucratOne);
		std::cout << std::endl;
		robotomyForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(robotomyForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tPresidentialPardonForm Default Constructor\t----------" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";

		PresidentialPardonForm	presidentialForm;

		std::cout << "\t" << "Get presidentialForm name : " << presidentialForm.getName() << std::endl;
		std::cout << "\t" << "Get presidentialForm sign requirement : " << presidentialForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialForm execution requirement : " << presidentialForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		presidentialForm.setSignStatus(true);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialForm.setSignStatus(false);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 5);
		
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "presidentialForm beSigned : ";
		presidentialForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute presidentialForm" << std::endl;
		std::cout << "\t";
		presidentialForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(presidentialForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tPresidentialPardonForm Parameter Constructor\t----------" << COLOR_RESET << std::endl;
	
		std::cout << "{" << std::endl;
		std::cout << "\t";

		PresidentialPardonForm	presidentialForm("Person_1");

		std::cout << "\t" << "Get presidentialForm name : " << presidentialForm.getName() << std::endl;
		std::cout << "\t" << "Get presidentialForm sign requirement : " << presidentialForm.getSignRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialForm execution requirement : " << presidentialForm.getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		presidentialForm.setSignStatus(true);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialForm.setSignStatus(false);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 5);
		
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "presidentialForm beSigned : " << std::endl;
		presidentialForm.beSigned(bureaucratOne);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute presidentialForm" << std::endl;
		std::cout << "\t";
		presidentialForm.execute(bureaucratOne);
		std::cout << std::endl;
		presidentialForm.execute(bureaucratOne);
		std::cout << std::endl;
		presidentialForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(presidentialForm);
	}
	std::cout << "}" << std::endl;
	return (0);
}
