/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:51:45 by llarue            #+#    #+#             */
/*   Updated: 2024/01/09 12:57:52 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class	Contact {
	public:
		std::string	Index;
		std::string	First_name;
		std::string	Last_name;
		std::string	Nickname;
		std::string	Phone_number;
		std::string	Darkest_secret;

		Contact(void);
		~Contact(void);
};

#endif
