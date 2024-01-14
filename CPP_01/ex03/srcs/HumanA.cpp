/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:49 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 17:00:52 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &Equiped ) : name(name), Equiped(Equiped) {
}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with their weapon " << Equiped.getType() << std::endl;
}