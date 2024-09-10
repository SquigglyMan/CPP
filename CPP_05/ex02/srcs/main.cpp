/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 13:25:54 by llarue           ###   ########.fr       */
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

		std::cout << shrubberyForm;

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
		std::cout << "\t" << "Get shrubberyForm signed by bureaucrat" << std::endl;
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

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm.setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
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

		std::cout << shrubberyForm;

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
		std::cout << "\t" << "Get shrubberyForm signed by bureaucrat" << std::endl;
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
		
		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm.setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
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

		std::cout << robotomyForm;

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
		std::cout << "\t" << "Get robotomyForm signed by bureaucrat" << std::endl;
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

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyForm.setSignStatus(false);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
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

		std::cout << robotomyForm;

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
		std::cout << "\t" << "Get robotomyForm signed by bureaucrat";
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

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyForm.setSignStatus(false);
		std::cout << "\t" << "Get robotomyForm sign status : " << (robotomyForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
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

		std::cout << presidentialForm;

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
		std::cout << "\t" << "Get presidentialForm signed by bureaucrat";
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

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialForm.setSignStatus(false);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
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

		std::cout << presidentialForm;

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
		std::cout << "\t" << "Get presidentialForm signed by bureaucrat" << std::endl;
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

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialForm.setSignStatus(false);
		std::cout << "\t" << "Get presidentialForm sign status : " << (presidentialForm.getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		presidentialForm.execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(presidentialForm);
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tBureaucrat grade too low\t----------" << COLOR_RESET << std::endl;
	
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Bureaucrat Bob;

		ShrubberyCreationForm shrubberyForm;
		RobotomyRequestForm	robotomyForm;
		PresidentialPardonForm	presidentialForm;


		std::cout << shrubberyForm;
		std::cout << "Execute shrubbery form" << std::endl;
		shrubberyForm.execute(Bob);
		
		std::cout << robotomyForm;
		std::cout << "Execute robotomy request form" << std::endl;
		robotomyForm.execute(Bob);

		std::cout << presidentialForm;
		std::cout << "Execute presidential pardon form" << std::endl;
		presidentialForm.execute(Bob);

		std::cout << std::endl;

		std::cout << "Execute shrubbery form by bureaucrat" << std::endl;
		Bob.executeForm(shrubberyForm);
		std::cout << "Execute robotomy request form by bureaucrat" << std::endl;
		Bob.executeForm(robotomyForm);
		std::cout << "Execute presidential pardon form by bureaucrat" << std::endl;
		Bob.executeForm(presidentialForm);

		std::cout << "Sign shrubbery form" << std::endl;
		shrubberyForm.setSignStatus(true);
		std::cout << shrubberyForm;

		std::cout << "Sign robotomy request form" << std::endl;
		robotomyForm.setSignStatus(true);
		std::cout << robotomyForm;

		std::cout << "Sign presidential pardon form" << std::endl;
		presidentialForm.setSignStatus(true);
		std::cout << presidentialForm;

		try {
			std::cout << "Execute shrubbery form" << std::endl;
			shrubberyForm.execute(Bob);

			std::cout << "Execute robotmy request form" << std::endl;
			robotomyForm.execute(Bob);

			std::cout << "Execute presidential pardon form" << std::endl;
			presidentialForm.execute(Bob);


			std::cout << "Execute shrubbery form by bureaucrat" << std::endl;
			Bob.executeForm(shrubberyForm);

			std::cout << "Execute robotomy request form by bureaucrat" << std::endl;	
			Bob.executeForm(robotomyForm);

			std::cout << "Execute presidential form by bureaucrat" << std::endl;
			Bob.executeForm(presidentialForm);
		}
		catch (AForm::IGradeException &e){
			std::cout << "what(): " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	return (0);
}
