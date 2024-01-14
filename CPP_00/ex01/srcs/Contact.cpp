/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:26 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 16:34:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->First_name = "First Name";
	this->Last_name = "Last Name";
	this->Nickname = "NickName";
}

std::string	Contact::PrintColumn( std::string str ) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}