/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/05 11:43:05 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	{
		std::cout << std::endl << MAGENTA << """----------\tForm default constructor\t----------" << COLOR_RESET << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Form	defaultForm;

		std::cout << defaultForm;
		// std::cout << "\tgetName : ";
		// std::cout << defaultForm.getName() << std::endl;

		// std::cout <<"\tgetSignRequirement : ";
		// std::cout << defaultForm.getSignRequirement() << std::endl;

		// std::cout << "\tgetExecutionRequirement : ";
		// std::cout << defaultForm.getExecutionRequirement() << std::endl;

		// std::cout << "\tgetSignStatus : ";
		// std::cout << defaultForm.getSignStatus() << std::endl;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << """----------\tForm parameter constructor\t----------" << COLOR_RESET <<  std::endl;
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Form	form("Test Form", 120, 40);

		std::cout << form;
		// std::cout << "\tgetName : ";
		// std::cout << Form1.getName() << std::endl;

		// std::cout <<"\tgetSignRequirement : ";
		// std::cout << Form1.getSignRequirement() << std::endl;

		// std::cout << "\tgetExecutionRequirement : ";
		// std::cout << Form1.getExecutionRequirement() << std::endl;

		// std::cout << "\tgetSignStatus : ";
		// std::cout << Form1.getSignStatus() << std::endl;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm copy constructor\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";
		
		Form originalForm("Original form", 120, 30);
		{
			std::cout << "\t";
			std::cout << "{" << std::endl;
			std::cout << "\t";
			Form copyForm(originalForm);

			std::cout << copyForm;
			// std::cout << "\t\tgetName : ";
			// std::cout << copyForm.getName() << std::endl;

			// std::cout <<"\t\tgetSignRequirement : ";
			// std::cout << copyForm.getSignRequirement() << std::endl;

			// std::cout << "\t\tgetExecutionRequirement : ";
			// std::cout << copyForm.getExecutionRequirement() << std::endl;

			// std::cout << "\t\tgetSignStatus : ";
			// std::cout << copyForm.getSignStatus() << std::endl;

			std::cout << "\t\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << originalForm;
		// std::cout << "\tgetName : ";
		// std::cout << originalForm.getName() << std::endl;

		// std::cout <<"\tgetSignRequirement : ";
		// std::cout << originalForm.getSignRequirement() << std::endl;

		// std::cout << "\tgetExecutionRequirement : ";
		// std::cout << originalForm.getExecutionRequirement() << std::endl;

		// std::cout << "\tgetSignStatus : ";
		// std::cout << originalForm.getSignStatus() << std::endl;

		std::cout << "\t";
	}
	{
		std::cout << std::endl << MAGENTA << "----------\tForm copy assignment operator\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";
		
		Form originalForm("Original form", 120, 30);
		Bureaucrat	Bob("Bob", 110);
		originalForm.beSigned(Bob);
		{
			std::cout << "\t";
			std::cout << "{" << std::endl;
			std::cout << "\t";
			Form copyForm;

			copyForm = originalForm;

			std::cout << copyForm;
			// std::cout << "\t\tgetName : ";
			// std::cout << copyForm.getName() << std::endl;

			// std::cout <<"\t\tgetSignRequirement : ";
			// std::cout << copyForm.getSignRequirement() << std::endl;

			// std::cout << "\t\tgetExecutionRequirement : ";
			// std::cout << copyForm.getExecutionRequirement() << std::endl;

			// std::cout << "\t\tgetSignStatus : ";
			// std::cout << copyForm.getSignStatus() << std::endl;

			std::cout << "\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << originalForm;
		// std::cout << "\tgetName : ";
		// std::cout << originalForm.getName() << std::endl;

		// std::cout <<"\tgetSignRequirement : ";
		// std::cout << originalForm.getSignRequirement() << std::endl;

		// std::cout << "\tgetExecutionRequirement : ";
		// std::cout << originalForm.getExecutionRequirement() << std::endl;

		// std::cout << "\tgetSignStatus : ";
		// std::cout << originalForm.getSignStatus() << std::endl;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm already signed\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;
		
		std::cout << "\t";
		Form testForm("Form #1", 40, 120);
		std::cout << "\t";
		Bureaucrat	Bob("Bob", 25);
		std::cout << "\t";
		Bureaucrat	Jim("Jim", 30);

		std::cout << "\t";
		Bob.signForm(testForm);
		
		std::cout << "\t";
		Jim.signForm(testForm);
		std::cout << "\t";
		Bob.signForm(testForm);

		std::cout << "\t";
		testForm.beSigned(Bob);
		std::cout << "\t";
		testForm.beSigned(Jim);
		
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm already signed - try & catch\t----------" << COLOR_RESET <<  std::endl;
		
		try {
			std::cout << "{" << std::endl;
			
			std::cout << "\t";
			Form testForm("Form #1", 20, 150);
			std::cout << "\t";
			Bureaucrat	Bob("Bob", 25);

			std::cout << "\t";
			Bob.signForm(testForm);
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
		try {
			std::cout << "{" << std::endl;
			
			std::cout << "\t";
			Form testForm("Form #1", 20, 150);
			std::cout << "\t";
			Bureaucrat	Bob("Bob", 25);

			std::cout << "\t";
			testForm.beSigned(Bob);
		} catch (Form::GradeTooLowException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	return (0);
}
