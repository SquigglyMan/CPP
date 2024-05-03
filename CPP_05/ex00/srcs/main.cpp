/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/05/03 12:40:26 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	{
		std::cout << std::endl << "---------- Bureaucrat default constructor ----------" << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		
		Bureaucrat	Bob;

		std::cout << std::endl;
		
		std::cout << "\t" << Bob << std::endl;
		
		std::cout << "\tgetGrade : ";
		std::cout << Bob.getGrade() << std::endl;
		
		std::cout << "\tgetName : ";
		std::cout << Bob.getName() << std::endl;
		
		std::cout << "\tincrementGrade : ";
		Bob.incrementGrade();
		std::cout << Bob.getGrade() << std::endl;
		
		std::cout << "\tdecrementGrade : ";
		Bob.decrementGrade();
		std::cout << Bob.getGrade() << std::endl;

		std::cout << std::endl;
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Bureaucrat parameter constructor ----------" << std::endl << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		try {	
			Bureaucrat	Bob("Bob", 25);
			
			std::cout << std::endl;

			std::cout << "\t" << Bob << std::endl;

			std::cout << "\tgetGrade : ";
			std::cout << Bob.getGrade() << std::endl;
			
			std::cout << "\tgetName : ";
			std::cout << Bob.getName() << std::endl;
			
			std::cout << "\tincrementGrade : ";
			Bob.incrementGrade();
			std::cout << Bob.getGrade() << std::endl;
			
			std::cout << "\tdecrementGrade : ";
			Bob.decrementGrade();
			std::cout << Bob.getGrade() << std::endl;
			
			std::cout << std::endl;
			std::cout << "\t";
			
		} catch (...) {
		}
		

	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Bureaucrat copy constructor ----------" << std::endl << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Bureaucrat	Bob("Bob", 25);
		
		std::cout << std::endl;
		{
			std::cout << "{" << std::endl;
			std::cout << "\t\t";

			Bureaucrat	Jim(Bob);
			
			std::cout << std::endl;

			std::cout << "\t\t" << Jim << std::endl;

			std::cout << std::endl;
			std::cout << "\t\t";
		}
		
		std::cout << std::endl << "\t" << Bob << std::endl;

		std::cout << std::endl;
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;	{
		std::cout << std::endl << "---------- Bureaucrat copy assignment operator ----------" << std::endl << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Bureaucrat	Bob("Bob", 25);
		
		std::cout << std::endl;
		{
			std::cout << "{" << std::endl;
			std::cout << "\t\t";

			Bureaucrat	Jim;
			
			std::cout << "\t\t";
			Jim = Bob;
			
			std::cout << std::endl;

			std::cout << "\t\t" << Jim << std::endl;

			std::cout << std::endl;
			std::cout << "\t\t";
		}
		
		std::cout << std::endl << "\t" << Bob << std::endl;

		std::cout << std::endl;
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Try & Catch grade too low ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 155);
		}
		catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Try & Catch grade too high ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 0);
		}
		catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Highest bureaucrat ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 1);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Lowest bureaucrat ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 150);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "\t" << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Increment to highest + 1 ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 3);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
			Bob.incrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";
			Bob.incrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";	
			Bob.incrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << "---------- Increment to Lowest - 1 ----------" << std::endl << std::endl;

		std::cout << "{" << std::endl;
		std::cout << "\t";
		try {
			Bureaucrat	Bob("Bob", 148);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
			Bob.decrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";
			Bob.decrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";	
			Bob.decrementGrade();
			std::cout << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	return (0);
}