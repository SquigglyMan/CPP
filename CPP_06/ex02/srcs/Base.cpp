/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:27:02 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 15:21:58 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) {
	std::cout << ORANGE << "Base default destructor" << COLOR_RESET << std::endl;
}

Base*	generate( void ) {
	if (rand() % 3 == 0)
		return (new A);
	else if (rand() % 3 == 1)
		return (new B);
	else 
		return (new C);
}

void	identify( Base* p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknow type" << std::endl;
}

void	identify( Base& p ) {
	try {
		try {
			try {
				C& c = dynamic_cast< C& >(p);
        		std::cout << "C" << std::endl;
        		(void)c;
				return ;
			}
			catch ( std::exception & e ) {	
			}
			 B& b = dynamic_cast< B& >(p);
        	std::cout << "B" << std::endl;
        	(void)b;
		}
		catch ( std::exception & e ) {
		}
        A& a = dynamic_cast< A& >(p);
        std::cout << "A" << std::endl;
        (void)a;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}