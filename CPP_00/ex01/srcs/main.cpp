/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:05:21 by llarue            #+#    #+#             */
/*   Updated: 2024/01/09 11:54:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	List;
	std::string	input;

	List.Print_contact_list();
	List.Print_command_selector();
	std::cin >> input;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			List.Add_contacts();
			std::cout << "ADD" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
			List.Print_contact_list();
		}
		else
			std::cout << "Invalid command" << std::endl;
		List.Print_command_selector();
		std::cin >> input;
	}
	return (0);
}