/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/09 13:24:37 by llarue           ###   ########.fr       */
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
	system("clear");
	for(int i = 0; i < 8; i++)
		std::cout	<< std::left << std::setw(10) <<  i + 1 << " | "
					<< std::left << std::setw(10) << List[i].First_name << " | "
					<< std::left << std::setw(10) << List[i].Last_name << " | "
					<< std::left << std::setw(10) << List[i].Nickname << " | "
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
	std::cout << "First name : " << std::endl;
	std::getline(std::cin, List[Index % 8].First_name);
	std::cout << "Last name : " << std::endl;
	std::getline(std::cin, List[Index % 8].Last_name);
	std::cout << "Nickname : " << std::endl;
	std::getline(std::cin, List[Index % 8].Nickname);
	std::cout << "Phone number : " << std::endl;
	std::getline(std::cin, List[Index % 8].Phone_number);
	std::cout << "Darkest secret : " << std::endl;
	std::getline(std::cin, List[Index % 8].Darkest_secret);
	Index++;
	system("clear");
}

void	PhoneBook::Select_contact(void)
{
	std::string input;

	std::cout << "Who's information would you like to see 1 - 8 : ";
	std::getline(std::cin, input);
	std::cout << "First name : " << List[atoi(input.c_str()) - 1].First_name << std::endl;
	std::cout << "Last name : " << List[atoi(input.c_str()) - 1].Last_name << std::endl;
	std::cout << "Nickname : " << List[atoi(input.c_str()) - 1].Nickname << std::endl;
	std::cout << "Phone number : " << List[atoi(input.c_str()) - 1].Phone_number << std::endl;
	std::cout << "Darkest secret : " << List[atoi(input.c_str()) - 1].Darkest_secret << std::endl;
}