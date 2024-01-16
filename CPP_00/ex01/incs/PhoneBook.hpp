/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:04:22 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 09:16:31 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <cstring>
# include <cstdlib>
# include <string.h>

# include "Contact.hpp"

# define WHITESPACE	" \n\r\t\f\v"

class	PhoneBook {
	private:
		Contact	List[8];
		int		index;

	public:
		PhoneBook();

		void	Print_command_selector( void );
		void	Print_contact_list( void );
		void	Add_contacts( void );
		void	Select_contact( void );
};

#endif