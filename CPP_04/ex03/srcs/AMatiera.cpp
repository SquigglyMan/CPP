/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMatiera.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:21 by llarue            #+#    #+#             */
/*   Updated: 2024/01/29 13:05:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) {
	
}

std::string const &	AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::close() {
	return (this);
}

void AMateria::use( ICharacter& target ) {
	
}