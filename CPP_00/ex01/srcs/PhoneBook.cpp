/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/08 18:12:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor" << std::endl;
	this->Index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor" << std::endl;
}

void	PhoneBook::Print_contact_list(void)
{
	for(int i = 0; i < 8; i++)
		std::cout	<< std::left << std::setw(10) <<  List[i].Index << " | "
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

void	PhoneBook::Add_contacts(int Index)
{
	std::cout << "New contact information" << std::endl;
	std::cout << "First name : " << std::endl;
	std::cin >> List[Index].First_name;
	std::cout << "Last name : " << std::endl;
	std::cin >> List[Index].Last_name;
	std::cout << "Nickname : " << std::endl;
	std::cin >> List[Index].Nickname;
	std::cout << "Phone number : " << std::endl;
	std::cin >> List[Index].Phone_number;
	std::cout << "Darkest secret : " << std::endl;
	std::cin >> List[Index].Darkset_secret;
}