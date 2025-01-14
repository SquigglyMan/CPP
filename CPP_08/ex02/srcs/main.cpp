/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:10:24 by llarue            #+#    #+#             */
/*   Updated: 2025/01/13 17:39:38 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main( void )
{
	{
		std::cout << MAGENTA << "----- Given main -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;

		std::cout << "\t";
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "\t" << "Mstack Top : " << mstack.top() << std::endl;

		std::cout << "\t" << "Mstack size before pop : " <<  mstack.size() << std::endl;
		mstack.pop();
		std::cout << "\t" << "Mstack size after pop : " <<  mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;

		while (it != ite)
		{
			std::cout << "\t" << "element at iterator : " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "\t";
	}
	std::cout << "}" << std::endl;
	{
		std::cout << MAGENTA << "----- Replace mutant stack with list -----" << COLOR_RESET << std::endl;

		std::cout << "{" << std::endl;

		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "\t" << "List Top : " << list.front() << std::endl;

		std::cout << "\t" << "List size before pop : " << list.size() << std::endl;
		list.pop_back();
		std::cout << "\t" << "List size after pop: " << list.size() << std::endl;


		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		//[...]
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;

		while (it != ite)
		{
			std::cout << "\t" << "element at iterator : " << *it << std::endl;
			++it;
		}
	}
	
	return (0);
}