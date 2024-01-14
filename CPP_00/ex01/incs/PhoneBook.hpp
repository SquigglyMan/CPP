/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:04:22 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 16:33:56 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <cstring>
# include <cstdlib>
# include <string.h>

# include "Contact.hpp"

class	PhoneBook {
	public:
		Contact	List[8];
		int		Index;

		PhoneBook();

		void	Print_command_selector( void );
		void	Print_contact_list( void );
		void	Add_contacts( void );
		void	Select_contact( void );
};

#endif