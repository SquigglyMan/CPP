/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:04:22 by llarue            #+#    #+#             */
/*   Updated: 2024/01/05 10:40:09 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

class	Contact
{
	private:
		std::string	Name;
		std::string	Phone;
	
	void	display_contact(void)
	{
		std::cout << Name;
		std::cout << " : ";
		std::cout << Phone << std::endl;
	}
};

class	PhoneBook
{
	private:
		Contact	List[8];
		int		Index;
};

#endif