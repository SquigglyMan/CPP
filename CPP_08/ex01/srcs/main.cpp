/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:09:43 by llarue            #+#    #+#             */
/*   Updated: 2024/09/17 11:54:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	{
		std::cout << MAGENTA << "----- Given main -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "\t" << sp.shortestSpan() << std::endl;
		std::cout << "\t" << sp.longestSpan() << std::endl;
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Empty default span : Shortest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp;

		try {
			std::cout << "\t" << "Try : Getting shortest span" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Empty default span : Longest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp;

		try {
			std::cout << "\t" << "Try : Getting longest span" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
		
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Empty parameter span : Shortest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp(13);

		try {
			std::cout << "\t" << "Try : Getting shortest span" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Empty parameter span : Longest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp(13);

		try {
			std::cout << "\t" << "Try : Getting longest span" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
		
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Single parameter span : Shortest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp(1);

		std::cout << "\t" << "Adding element to span" << std::endl;
		sp.addNumber(13);

		try {
			std::cout << "\t" << "Try : Getting shortest span" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Single parameter span : Longest span -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp(1);

		std::cout << "\t" << "Adding element to span" << std::endl;
		sp.addNumber(13);

		try {
			std::cout << "\t" << "Try : Getting longest span" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
		
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Adding more elements than size limit -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;
		
		Span	sp(5);

		std::cout << "\t" << "Span created with 5 elements" << std::endl << std::endl;

		std::cout << "\t" << "Adding element to span : 1" << std::endl;
		sp.addNumber(1);
		std::cout << "\t" << "Adding element to span : 2" << std::endl;
		sp.addNumber(2);
		std::cout << "\t" << "Adding element to span : 3" << std::endl;
		sp.addNumber(3);
		std::cout << "\t" << "Adding element to span : 4" << std::endl;
		sp.addNumber(4);
		std::cout << "\t" << "Adding element to span : 5" << std::endl;
		sp.addNumber(5);
		
		std::cout << std::endl;

		try {
			std::cout << "\t" << "Try : Adding extra element to span" << std::endl;
			std::cout << "\t" << "Adding element to span : 6" << std::endl;
			sp.addNumber(6);
		}
		catch (Span::ISpanException & e) {
			std::cout << "\t" << "Catch :" << std::endl;			
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}

		try {
			std::cout << "\t" << "Try : Getting longest span" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(Span::ISpanException & e) {
			std::cout << "\t" << "what(): " << e.what() << std::endl;
		}
		
	}
	return (0);
}