/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:26 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 07:24:21 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->firstName = "First Name";
	this->lastName = "Last Name";
	this->nickname = "NickName";
}

std::string	Contact::PrintColumn( std::string str ) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string	Contact::getFirstName( void ) {
	return (this->firstName);
}

std::string Contact::getLasttName( void ) {
	return (this->lastName);
}

std::string Contact::getNicktName( void ) {
	return (this->nickname);
}

std::string Contact::getPhoneNumber( void ) {
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret( void ) {
	return (this->darkestSecret);
}

void	Contact::setFirstName( std::string firstName ) {
	this->firstName = firstName;
}

void Contact::setLasttName( std::string lastName ) {
	this->lastName = lastName;
}

void Contact::setNicktName( std::string nickname ) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber( std::string phoneNumber ) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret( std::string darkestSecret ) {
	this->darkestSecret = darkestSecret;
}
