/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:27:02 by llarue            #+#    #+#             */
/*   Updated: 2024/05/06 09:04:07 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) {
	std::cout << "Base default destructor" << std::endl;
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
        A& a = dynamic_cast< A& >(p);
        std::cout << "A" << std::endl;
        (void)a;
    } catch	(const std::exception& e) {
	}
	
    try {
        B& b = dynamic_cast< B& >(p);
        std::cout << "B" << std::endl;
        (void)b;
    } catch	( const std::exception& e ) {
	}

    try {
        C& c = dynamic_cast< C& >(p);
        std::cout << "C" << std::endl;
        (void)c;
    } catch	( const std::exception& e ) {
	}
}