/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 09:21:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	this->Index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Print_contact_list(void)
{
	std::cout << "Contacts" << std::endl;
	for(int i = 0; i < 8; i++)
		std::cout	<< std::setw(10) << i + 1
					<< "|" << std::setw(10) << List->Print_column(List[i].First_name)
					<< "|" << std::setw(10) << List->Print_column(List[i].Last_name)
					<< "|" << std::setw(10) << List->Print_column(List[i].Nickname)
					<< std::endl;
}

void	PhoneBook::Print_command_selector(void)
{
	std::cout << "Would you like to : " << std::endl;
	std::cout << "ADD | SEARCH | EXIT" << std::endl;
}

void	PhoneBook::Add_contacts(void)
{
	system("clear");
	std::cout << "New contact information" << std::endl;
	while (true)
	{
		std::cout << "First name : " << std::endl;
		std::getline(std::cin, List[Index].First_name);
		if (List[Index % 8].First_name.empty())
			std::cout << "Field can't be empty" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Last name : " << std::endl;
		std::getline(std::cin, List[Index].Last_name);
		if (List[Index % 8].Last_name.empty())
			std::cout << "Field can't be empty" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Nickname : " << std::endl;
		std::getline(std::cin, List[Index].Nickname);
		if (List[Index % 8].Nickname.empty())
			std::cout << "Field can't be empty" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Phone number : " << std::endl;
		std::getline(std::cin, List[Index].Phone_number);
		std::string::const_iterator	it = List[Index % 8].Phone_number.begin();
		while (it != List[Index % 8].Phone_number.end() && std::isdigit(*it))
			++it;
		if (List[Index % 8].Phone_number.empty() || it != List[Index % 8].Phone_number.end())
			std::cout << "Invalid phone number" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Darkest secret : " << std::endl;
		std::getline(std::cin, List[Index].Darkest_secret);
		if (List[Index % 8].Darkest_secret.empty())
			std::cout << "Field can't be empty" << std::endl;
		else
			break ;
	}
	Index = (Index + 1) % 8;
	system("clear");
}

void	PhoneBook::Select_contact(void)
{
	std::string input;

	while (1)
	{
		Print_contact_list();
		std::cout << "Type BACK to go back to main menu" << std::endl;
		std::cout << "Who's information would you like to see 1 - 8 : ";
		std::getline(std::cin, input);
		if (input == "BACK")
		{
			system("clear");
			break ;
		}
		else if (std::atoi(input.c_str()) >= 1 && std::atoi(input.c_str()) <= 8)
		{
			system("clear");
			std::cout << "Invalid index" << std::endl;
			std::cout << "First name : " << List[atoi(input.c_str()) - 1].First_name << std::endl;
			std::cout << "Last name : " << List[atoi(input.c_str()) - 1].Last_name << std::endl;
			std::cout << "Nickname : " << List[atoi(input.c_str()) - 1].Nickname << std::endl;
			std::cout << "Phone number : " << List[atoi(input.c_str()) - 1].Phone_number << std::endl;
			std::cout << "Darkest secret : " << List[atoi(input.c_str()) - 1].Darkest_secret << std::endl;
		}
		else
		{
			system("clear");
			std::cout << "Invalid input" << std::endl;
		}
	}
}