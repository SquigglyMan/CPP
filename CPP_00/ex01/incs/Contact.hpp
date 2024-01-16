/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:51:45 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 09:41:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class	Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact();

		std::string	PrintColumn( std::string str );

		std::string	getFirstName( void );
		std::string	getLasttName( void );
		std::string	getNicktName( void );
		std::string	getPhoneNumber( void );
		std::string	getDarkestSecret( void );

		void	setFirstName( std::string firstName );
		void	setLasttName( std::string lastName );
		void	setNicktName( std::string nickname );
		void	setPhoneNumber( std::string phoneNumber );
		void	setDarkestSecret( std::string darkestSecret );
};

#endif
