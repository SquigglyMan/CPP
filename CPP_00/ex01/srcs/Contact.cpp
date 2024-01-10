/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:26 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 09:17:43 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->Index = "0";
	this->First_name = "First Name";
	this->Last_name = "Last Name";
	this->Nickname = "NickName";
}

Contact::~Contact()
{
}

std::string	Contact::Print_column(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}