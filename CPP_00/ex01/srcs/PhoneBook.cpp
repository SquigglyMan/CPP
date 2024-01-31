/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 10:28:28 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook() {
	this->index = 0;
}

void	PhoneBook::Print_contact_list( void ) {
	std::cout << "Contacts :" << std::endl;
	for(int i = 0; i < 8; i++)
		std::cout	<< std::setw(10) << i + 1
					<< "|" << std::setw(10) << List->PrintColumn(List[i].getFirstName())
					<< "|" << std::setw(10) << List->PrintColumn(List[i].getLasttName())
					<< "|" << std::setw(10) << List->PrintColumn(List[i].getNicktName())
					<< std::endl;
}

void	PhoneBook::Print_command_selector( void ) {
	std::cout << "Would you like to : " << std::endl;
	std::cout << "ADD | SEARCH | EXIT" << std::endl;
}

void	PhoneBook::Add_contacts( void ) {
	std::string	input;
	system("clear");
	std::cout << "New contact information" << std::endl;
	while (true)
	{
		std::cout << "First name : " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.empty())
			std::cout << "Field can't be empty" << std::endl << std::endl;
		size_t	pos = input.find_last_not_of(WHITESPACE);
		std::string::const_iterator	it = input.begin();
		while (it != input.end() && std::isprint(*it))
			++it;
		if (input.empty() || it != input.end())
			std::cout << "Can only contain letters, symbols and spaces" << std::endl;
		else
		{
			List[index % 8].setFirstName(((pos == input.npos) ? "" : input.substr(0, pos + 1)));
			break ;
		}
	}
	while (true)
	{
		std::cout << "Last name : " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.empty())
			std::cout << "Field can't be empty" << std::endl << std::endl;
		size_t	pos = input.find_last_not_of(WHITESPACE);
		std::string::const_iterator	it = input.begin();
		while (it != input.end() && std::isprint(*it))
			++it;
		if (input.empty() || it != input.end())
			std::cout << "Can only contain letters, symbols and spaces" << std::endl;
		else
		{
			List[index % 8].setLasttName(((pos == input.npos) ? "" : input.substr(0, pos + 1)));
			break ;
		}
	}
	while (true)
	{
		std::cout << "nickname : " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.empty())
			std::cout << "Field can't be empty" << std::endl << std::endl;
		size_t	pos = input.find_last_not_of(WHITESPACE);
		std::string::const_iterator	it = input.begin();
		while (it != input.end() && std::isprint(*it))
			++it;
		if (input.empty() || it != input.end())
			std::cout << "Can only contain letters, symbols and spaces" << std::endl;
		else
		{
			List[index % 8].setNicktName(((pos == input.npos) ? "" : input.substr(0, pos + 1)));
			break ;
		}
	}
	while (true)
	{
		std::cout << "Phone number : " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		std::string::const_iterator	it = input.begin();
		while (it != input.end() && std::isdigit(*it))
			++it;
		if (input.empty() || it != input.end())
			std::cout << "Invalid phone number" << std::endl;
		else
		{
			List[index % 8].setPhoneNumber(input);
			break ;
		}
	}
	while (true)
	{
		std::cout << "Darkest secret : " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.empty())
			std::cout << "Field can't be empty" << std::endl;
		size_t	pos = input.find_last_not_of(WHITESPACE);
		std::string::const_iterator	it = input.begin();
		while (it != input.end() && std::isprint(*it))
			++it;
		if (input.empty() || it != input.end())
			std::cout << "Can only contain letters, symbols and spaces" << std::endl;
		else
		{
			List[index % 8].setDarkestSecret(((pos == input.npos) ? "" : input.substr(0, pos + 1)));
			break ;
		}
	}
	index = (index + 1) % 8;
	system("clear");
}

void	PhoneBook::Select_contact( void ) {
	int			index;
	std::string input;

	while (1)
	{
		Print_contact_list();
		std::cout << std::endl << "Type BACK to go back to main menu" << std::endl;
		std::cout << "Who's information would you like to see 1 - 8 : ";
		if (!std::getline(std::cin, input))
			return ;
		if (input == "BACK")
		{
			system("clear");
			break ;
		}
		index = std::atoi(input.c_str());
		if (index >= 1 && index <= 8)
		{
			system("clear");
			std::cout << "First name : " << List[index - 1].getFirstName() << std::endl;
			std::cout << "Last name : " << List[index - 1].getLasttName() << std::endl;
			std::cout << "nickname : " << List[index - 1].getNicktName() << std::endl;
			std::cout << "Phone number : " << List[index - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret : " << List[index - 1].getDarkestSecret() << std::endl;
		}
		else
		{
			system("clear");
			std::cout << "Invalid input" << std::endl << std::endl;
		}
	}
}