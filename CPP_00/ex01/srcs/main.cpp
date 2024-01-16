/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:05:21 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 07:34:21 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	List;
	std::string	input;

	system("clear");
	List.Print_contact_list();
	List.Print_command_selector();
	if (!std::getline(std::cin, input))
		return (1);
	while (input != "EXIT")
	{
		if (input == "ADD")
			List.Add_contacts();
		else if (input == "SEARCH")
		{
			system("clear");
			List.Select_contact();
		}
		else
			std::cout << "Invalid command" << std::endl;
		if (std::cin.good() == true)
			List.Print_command_selector();
		if (!std::getline(std::cin, input))
			return (1);
	}
	return (0);
}