/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:47 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 16:11:44 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << BOLD_PURPLE << "Weapon default constructor" << COLOR_RESET << std::endl;
}

Weapon::Weapon( std::string type ) : type(type) {
	std::cout << BOLD_PURPLE << "Weapon constructor" << COLOR_RESET << std::endl;
}

Weapon::~Weapon() {
	std::cout << BOLD_PURPLE << "Weapon destructor" << COLOR_RESET << std::endl;
}

std::string const	&Weapon::getType( void ) {
	return (this->type);
}

void	Weapon::setType( std::string new_type ) {
	this->type = new_type;
}
