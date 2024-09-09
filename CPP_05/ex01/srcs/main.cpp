/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/09 13:33:39 by llarue           ###   ########.fr       */
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
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << """----------\tForm parameter constructor\t----------" << COLOR_RESET <<  std::endl;
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Form	form("Test Form", 120, 40);

		std::cout << form;
		
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
			Form copyForm(originalForm);

			copyForm.setSignStatus(true);
			
			std::cout << copyForm;

			std::cout << "\t\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << originalForm;

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

			copyForm.setSignStatus(true);

			std::cout << copyForm;

			std::cout << "\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << originalForm;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm sign requirement too high\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;

		try {
			Form testForm("Form #1", 0, -13);
		}
		catch (Form::IFormGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm sign requirement too low\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;

		try {
			Form testForm("Form #1", 155, -13);
		}
		catch (Form::IFormGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm execute requirement too high\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;

		try {
			Form testForm("Form #1", 13, 0);
		}
		catch (Form::IFormGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
	}
	std::cout << "}";
	{
		std::cout << std::endl << MAGENTA << "----------\tForm execute requirement too low\t----------" << COLOR_RESET <<  std::endl;
		
		std::cout << "{" << std::endl;

		try {
			Form testForm("Form #1", 13, 155);
		}
		catch (Form::IFormGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
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
		std::cout << std::endl;
		
		std::cout << "\t";
		Jim.signForm(testForm);
		std::cout << "\t";
		Bob.signForm(testForm);

		std::cout << std::endl;

		std::cout << "\t";
		testForm.beSigned(Bob);
		std::cout << "\t";
		testForm.beSigned(Jim);
		
		
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	return (0);
}
