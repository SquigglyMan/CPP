/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 17:07:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type) {
}

std::string const	&Weapon::getType( void ) {
	return (this->type);
}

void	Weapon::setType( std::string new_type ) {
	this->type = new_type;
}