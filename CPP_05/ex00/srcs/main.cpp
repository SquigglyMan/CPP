/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/09 12:25:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	{
		std::cout << std::endl << MAGENTA << "----------\tBureaucrat default constructor\t----------" << COLOR_RESET << std::endl;

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
		std::cout << std::endl << MAGENTA << "----------\tBureaucrat parameter constructor\t----------" << COLOR_RESET << std::endl << std::endl;
		
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
		std::cout << std::endl << MAGENTA << "----------\tBureaucrat copy constructor\t----------" << COLOR_RESET << std::endl << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Bureaucrat	Bob("Bob", 13);
		
		std::cout << std::endl << "\t" << Bob << std::endl;
		
		std::cout << std::endl;
		{
			std::cout << "\t" << "{" << std::endl;
			std::cout << "\t\t";

			Bureaucrat	Jim(Bob);
			
			std::cout << std::endl;

			std::cout << "\t\t" << Jim << std::endl;

			std::cout << std::endl;
			std::cout << "\t\t";
		}
		
		std::cout << "\t" << "}" << std::endl;
		
		std::cout << std::endl << "\t" << Bob << std::endl;

		std::cout << std::endl;
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;	
	{
		std::cout << std::endl << MAGENTA << "----------\tBureaucrat copy assignment operator\t----------" << COLOR_RESET << std::endl << std::endl;
		
		std::cout << "{" << std::endl;
		std::cout << "\t";

		Bureaucrat	Bob("Bob", 13);
		
		std::cout << std::endl << "\t" << Bob << std::endl;
		
		std::cout << std::endl;
		{
			std::cout << "\t" << "{" << std::endl;
			std::cout << "\t\t";

			Bureaucrat	Jim;
			
			std::cout << "\t\t";
			Jim = Bob;
			
			std::cout << std::endl;

			std::cout << "\t\t" << Jim << std::endl;

			std::cout << std::endl;
			std::cout << "\t\t";
		}

		std::cout << "\t" << "}" << std::endl;
		
		std::cout << std::endl << "\t" << Bob << std::endl;

		std::cout << std::endl;
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << MAGENTA << "----------\tTry & Catch grade too low\t----------" << COLOR_RESET << std::endl << std::endl;

		std::cout << "{" << std::endl;
		try {
			std::cout << "\t" << "Creating bureaucrat with grade 155" << std::endl;
			std::cout << "\t";
			Bureaucrat	Bob("Bob", 155);
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;

		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << MAGENTA << "----------\tTry & Catch grade too high\t----------" << COLOR_RESET << std::endl << std::endl;

		std::cout << "{" << std::endl;
		try {
			std::cout << "\t" << "Creating bureaucrat with grade 0" << std::endl;
			std::cout << "\t";
			Bureaucrat	Bob("Bob", 0);
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;

		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << MAGENTA << "----------\tHighest bureaucrat\t----------" << COLOR_RESET << std::endl << std::endl;

		std::cout << "{" << std::endl;
		try {
			std::cout << "\t" << "Creating bureaucrat with grade 1" << std::endl;
			Bureaucrat	Bob("Bob", 1);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;

		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << MAGENTA << "----------\tLowest bureaucrat\t----------" << COLOR_RESET << std::endl << std::endl;

		std::cout << "{" << std::endl;
		try {
			std::cout << "\t" << "Creating bureaucrat with grade 150" << std::endl;
			Bureaucrat	Bob("Bob", 150);
			std::cout << "\t" << Bob << std::endl;
			std::cout << "\t";
		}
		catch (Bureaucrat::IGradeException & e) {
			std::cout << "\twhat() : " << e.what() << std::endl;

		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << std::endl << MAGENTA << "----------\tIncrement to highest + 1\t----------" << COLOR_RESET << std::endl << std::endl;

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
		std::cout << std::endl << MAGENTA << "----------\tIncrement to Lowest - 1\t----------" << COLOR_RESET << std::endl << std::endl;

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