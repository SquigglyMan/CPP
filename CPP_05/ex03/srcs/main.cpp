/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 14:00:53 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern Default Constructor\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern internZero;

		try {
			internZero.makeForm("RandomForm", "NoTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what() : " << e.what() << std::endl;
		}
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern Copy Constructor\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern	internOriginal;
		{
			Intern	internCopy(internOriginal);
			AForm	*shrubberyForm;

			shrubberyForm = internCopy.makeForm("ShrubberyCreationForm", "TargetCopy");

			delete (shrubberyForm);
		}
		
		try {
			AForm	*shrubberyForm;

			shrubberyForm = internOriginal.makeForm("ShrubberyCreationForm", "TargetOriginal");

			delete (shrubberyForm);
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what() : " << e.what() << std::endl;
		}
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern random form & random target\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern internZero;
		
		try {
			internZero.makeForm("RandomForm", "RandomTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern shrubbery creation form\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern	internZero;
		AForm	*shrubberyForm;
		
		try {
			shrubberyForm = internZero.makeForm("ShrubberyCreationForm", "RandomTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << "\t" << "Get shrubberyForm name : " << shrubberyForm->getName() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign requirement : " << shrubberyForm->getSignRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm execution requirement : " << shrubberyForm->getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		shrubberyForm->setSignStatus(true);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm->setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Get shrubberyForm signed by bureaucrat" << std::endl;
		shrubberyForm->beSigned(bureaucratOne);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*shrubberyForm);

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm->setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*shrubberyForm);
		
		delete (shrubberyForm);
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern robotomy request form\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern	internZero;
		AForm	*robotomyRequest;
		
		try {
			robotomyRequest = internZero.makeForm("RobotomyRequestForm", "RandomTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << "\t" << "Get robotomyRequest name : " << robotomyRequest->getName() << std::endl;
		std::cout << "\t" << "Get robotomyRequest sign requirement : " << robotomyRequest->getSignRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyRequest execution requirement : " << robotomyRequest->getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		robotomyRequest->setSignStatus(true);
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyRequest->setSignStatus(false);
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Get robotomyRequest signed by bureaucrat" << std::endl;
		robotomyRequest->beSigned(bureaucratOne);
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute robotomyRequest" << std::endl;
		std::cout << "\t";
		robotomyRequest->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*robotomyRequest);

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		robotomyRequest->setSignStatus(false);
		std::cout << "\t" << "Get robotomyRequest sign status : " << (robotomyRequest->getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute robotomyRequest" << std::endl;
		std::cout << "\t";
		robotomyRequest->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*robotomyRequest);
		
		delete (robotomyRequest);
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tIntern presidential pardon form\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern	internZero;
		AForm	*presidentialPardon;
		
		try {
			presidentialPardon = internZero.makeForm("PresidentialPardonForm", "RandomTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << "\t" << "Get presidentialPardon name : " << presidentialPardon->getName() << std::endl;
		std::cout << "\t" << "Get presidentialPardon sign requirement : " << presidentialPardon->getSignRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialPardon execution requirement : " << presidentialPardon->getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		presidentialPardon->setSignStatus(true);
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialPardon->setSignStatus(false);
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 5);
		
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Get presidentialPardon signed by bureaucrat" << std::endl;
		presidentialPardon->beSigned(bureaucratOne);
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute presidentialPardon" << std::endl;
		std::cout << "\t";
		presidentialPardon->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*presidentialPardon);

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		presidentialPardon->setSignStatus(false);
		std::cout << "\t" << "Get presidentialPardon sign status : " << (presidentialPardon->getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute presidentialPardon" << std::endl;
		std::cout << "\t";
		presidentialPardon->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*presidentialPardon);
		
		delete (presidentialPardon);
		std::cout << "\t";
	}
		std::cout << "}";
	{
		std::cout << MAGENTA << std::endl << """----------\tForm created by an intern behaves the same way as a normal form\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;

		Intern	internZero;
		AForm	*shrubberyForm;

		try {
			shrubberyForm = internZero.makeForm("ShrubberyCreationForm", "RandomTarget");
		}
		catch (Intern::FormNotFound & e) {
			std::cout << "what(): " << e.what() << std::endl;
		}

		std::cout << "\t" << "Get shrubberyForm name : " << shrubberyForm->getName() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign requirement : " << shrubberyForm->getSignRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm execution requirement : " << shrubberyForm->getExecutionRequirement() << std::endl;
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;


		std::cout << std::endl;
	
		std::cout << "\t" << "Set sign status : signed" << std::endl;
		shrubberyForm->setSignStatus(true);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm->setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		Bureaucrat	bureaucratOne("Bob", 25);
		
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		std::cout << "\t" << "Get shrubberyForm signed by bureaucrat" << std::endl;
		shrubberyForm->beSigned(bureaucratOne);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;

		std::cout << std::endl;

		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*shrubberyForm);

		std::cout << std::endl;

		std::cout << "\t" << "Set sign status : not signed" << std::endl;
		shrubberyForm->setSignStatus(false);
		std::cout << "\t" << "Get shrubberyForm sign status : " << (shrubberyForm->getSignStatus() ? "signed" : "not signed") << std::endl;
		
		std::cout << "\t" << "Execute shruberryForm" << std::endl;
		std::cout << "\t";
		shrubberyForm->execute(bureaucratOne);

		std::cout << std::endl;

		std::cout << "\t" << "executeForm by bureaucrat" << std::endl;
		std::cout << "\t";
		bureaucratOne.executeForm(*shrubberyForm);
		
		std::cout << "\t";

		delete (shrubberyForm);
	}
	std::cout << "}" << std::endl;
	return (0);
}