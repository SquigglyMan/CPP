/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:07:27 by llarue            #+#    #+#             */
/*   Updated: 2024/03/09 14:28:29 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	{
		std::cout << std::endl << "---------- Bureaucrat default constructor ----------" << std::endl << std::endl;

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

		Bureaucrat	Bob("Bob", 15);
		
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
	std::cout << "}" << std::endl;
	return (0);
}