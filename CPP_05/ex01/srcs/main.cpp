/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/04/30 17:37:48 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	{
		std::cout << std::endl << """---------- Form default constructor ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Form	defaultForm;

		std::cout << "\tgetName : ";
		std::cout << defaultForm.getName() << std::endl;

		std::cout <<"\tgetSignRequirement : ";
		std::cout << defaultForm.getSignRequirement() << std::endl;

		std::cout << "\tgetExecutionRequirement : ";
		std::cout << defaultForm.getExecutionRequirement() << std::endl;

		std::cout << "\tgetSignStatus : ";
		std::cout << defaultForm.getSignStatus() << std::endl;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << """---------- Form parameter constructor ----------" << std::endl;
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Form	Form1("Test Form", 120, 40);

		std::cout << "\tgetName : ";
		std::cout << Form1.getName() << std::endl;

		std::cout <<"\tgetSignRequirement : ";
		std::cout << Form1.getSignRequirement() << std::endl;

		std::cout << "\tgetExecutionRequirement : ";
		std::cout << Form1.getExecutionRequirement() << std::endl;

		std::cout << "\tgetSignStatus : ";
		std::cout << Form1.getSignStatus() << std::endl;
		
		std::cout << "\t";
	}
	std::cout << "}";
	{
		std::cout << std::endl << "---------- Form copy constructor ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";
		
		Form originalForm("Original form", 120, 30);
		{
			std::cout << "\t";
			std::cout << "{" << std::endl;
			std::cout << "\t\t";
			Form copyForm(originalForm);

			std::cout << "\t\tgetName : ";
			std::cout << copyForm.getName() << std::endl;

			std::cout <<"\t\tgetSignRequirement : ";
			std::cout << copyForm.getSignRequirement() << std::endl;

			std::cout << "\t\tgetExecutionRequirement : ";
			std::cout << copyForm.getExecutionRequirement() << std::endl;

			std::cout << "\t\tgetSignStatus : ";
			std::cout << copyForm.getSignStatus() << std::endl;

			std::cout << "\t\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << "\tgetName : ";
		std::cout << originalForm.getName() << std::endl;

		std::cout <<"\tgetSignRequirement : ";
		std::cout << originalForm.getSignRequirement() << std::endl;

		std::cout << "\tgetExecutionRequirement : ";
		std::cout << originalForm.getExecutionRequirement() << std::endl;

		std::cout << "\tgetSignStatus : ";
		std::cout << originalForm.getSignStatus() << std::endl;

		std::cout << "\t";
	}
	{
		std::cout << std::endl << "---------- Form copy assignment operator ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";
		
		Form originalForm("Original form", 120, 30);
		{
			std::cout << "\t";
			std::cout << "{" << std::endl;
			std::cout << "\t\t";
			Form copyForm;

			copyForm = originalForm;

			std::cout << "\t\tgetName : ";
			std::cout << copyForm.getName() << std::endl;

			std::cout <<"\t\tgetSignRequirement : ";
			std::cout << copyForm.getSignRequirement() << std::endl;

			std::cout << "\t\tgetExecutionRequirement : ";
			std::cout << copyForm.getExecutionRequirement() << std::endl;

			std::cout << "\t\tgetSignStatus : ";
			std::cout << copyForm.getSignStatus() << std::endl;

			std::cout << "\t\t";
		}
		std::cout << "\t";
		std::cout << "}" << std::endl;

		std::cout << "\tgetName : ";
		std::cout << originalForm.getName() << std::endl;

		std::cout <<"\tgetSignRequirement : ";
		std::cout << originalForm.getSignRequirement() << std::endl;

		std::cout << "\tgetExecutionRequirement : ";
		std::cout << originalForm.getExecutionRequirement() << std::endl;

		std::cout << "\tgetSignStatus : ";
		std::cout << originalForm.getSignStatus() << std::endl;

		std::cout << "\t";
	}
	{
		std::cout << std::endl << "---------- Form test ----------" << std::endl;
		
		std::cout << "{" << std::endl;
		
		std::cout << "\t";
		Form testForm("Form #1", 40, 120);
		std::cout << "\t";
		Bureaucrat	Bob;
		std::cout << "\t";
		Bureaucrat	Jim("Jim", 30);

		std::cout << "\t";
		Bob.signForm(testForm);
		
		std::cout << "\t";
		Jim.signForm(testForm);
		std::cout << "\t";
		Jim.signForm(testForm);
		
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	return (0);
}

// int	main( void )
// {
// 	{
// 		std::cout << std::endl << "---------- Bureaucrat default constructor ----------" << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
		
// 		Bureaucrat	Bob;

// 		std::cout << std::endl;
		
// 		std::cout << "\t" << Bob << std::endl;
		
// 		std::cout << "\tgetGrade : ";
// 		std::cout << Bob.getGrade() << std::endl;
		
// 		std::cout << "\tgetName : ";
// 		std::cout << Bob.getName() << std::endl;
		
// 		std::cout << "\tincrementGrade : ";
// 		Bob.incrementGrade();
// 		std::cout << Bob.getGrade() << std::endl;
		
// 		std::cout << "\tdecrementGrade : ";
// 		Bob.decrementGrade();
// 		std::cout << Bob.getGrade() << std::endl;

// 		std::cout << std::endl;
// 		std::cout << "\t";
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Bureaucrat parameter constructor ----------" << std::endl << std::endl;
		
// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";

// 		try {	
// 			Bureaucrat	Bob("Bob", 155);
			
// 			std::cout << std::endl;

// 			std::cout << "\t" << Bob << std::endl;

// 			std::cout << "\tgetGrade : ";
// 			std::cout << Bob.getGrade() << std::endl;
			
// 			std::cout << "\tgetName : ";
// 			std::cout << Bob.getName() << std::endl;
			
// 			std::cout << "\tincrementGrade : ";
// 			Bob.incrementGrade();
// 			std::cout << Bob.getGrade() << std::endl;
			
// 			std::cout << "\tdecrementGrade : ";
// 			Bob.decrementGrade();
// 			std::cout << Bob.getGrade() << std::endl;
			
// 			std::cout << std::endl;
// 			std::cout << "\t";
			
// 		} catch (...) {
// 		}
		

// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Bureaucrat copy constructor ----------" << std::endl << std::endl;
		
// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";

// 		Bureaucrat	Bob("Bob", 25);
		
// 		std::cout << std::endl;
// 		{
// 			std::cout << "{" << std::endl;
// 			std::cout << "\t\t";

// 			Bureaucrat	Jim(Bob);
			
// 			std::cout << std::endl;

// 			std::cout << "\t\t" << Jim << std::endl;

// 			std::cout << std::endl;
// 			std::cout << "\t\t";
// 		}
		
// 		std::cout << std::endl << "\t" << Bob << std::endl;

// 		std::cout << std::endl;
// 		std::cout << "\t";
// 	}
// 	std::cout << "}" << std::endl;	{
// 		std::cout << std::endl << "---------- Bureaucrat copy assignment operator ----------" << std::endl << std::endl;
		
// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";

// 		Bureaucrat	Bob("Bob", 25);
		
// 		std::cout << std::endl;
// 		{
// 			std::cout << "{" << std::endl;
// 			std::cout << "\t\t";

// 			Bureaucrat	Jim;
			
// 			std::cout << "\t\t";
// 			Jim = Bob;
			
// 			std::cout << std::endl;

// 			std::cout << "\t\t" << Jim << std::endl;

// 			std::cout << std::endl;
// 			std::cout << "\t\t";
// 		}
		
// 		std::cout << std::endl << "\t" << Bob << std::endl;

// 		std::cout << std::endl;
// 		std::cout << "\t";
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Try & Catch grade too low ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 155);
// 		}
// 		catch (Bureaucrat::GradeTooLowException & e) {
// 			std::cout << "\t" << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Try & Catch grade too high ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 0);
// 		}
// 		catch (Bureaucrat::GradeTooHighException & e) {
// 			std::cout << "\t" << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Highest bureaucrat ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 1);
// 			std::cout << "\t" << Bob << std::endl;
// 			std::cout << "\t";
// 		}
// 		catch (Bureaucrat::GradeTooHighException & e) {
// 			std::cout << "\t" << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Lowest bureaucrat ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 150);
// 			std::cout << "\t" << Bob << std::endl;
// 			std::cout << "\t";
// 		}
// 		catch (Bureaucrat::GradeTooHighException & e) {
// 			std::cout << "\t" << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Increment to highest + 1 ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 3);
// 			std::cout << "\t" << Bob << std::endl;
// 			std::cout << "\t";
// 			Bob.incrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";
// 			Bob.incrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";	
// 			Bob.incrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";
// 		}
// 		catch (Bureaucrat::IGradeException & e) {
// 			std::cout << "\twhat() : " << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	{
// 		std::cout << std::endl << "---------- Increment to Lowest - 1 ----------" << std::endl << std::endl;

// 		std::cout << "{" << std::endl;
// 		std::cout << "\t";
// 		try {
// 			Bureaucrat	Bob("Bob", 148);
// 			std::cout << "\t" << Bob << std::endl;
// 			std::cout << "\t";
// 			Bob.decrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";
// 			Bob.decrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";	
// 			Bob.decrementGrade();
// 			std::cout << Bob << std::endl;
// 			std::cout << "\t";
// 		}
// 		catch (Bureaucrat::IGradeException & e) {
// 			std::cout << "\twhat() : " << e.what() << std::endl;
// 		}
// 	}
// 	std::cout << "}" << std::endl;
// 	return (0);
// }