/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:49 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 16:11:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &Equiped ) : name(name), Equiped(Equiped) {
		std::cout << BOLD_PURPLE << "HumanA constructor" << COLOR_RESET << std::endl;
}

HumanA::~HumanA() {
	std::cout << BOLD_PURPLE << "HumanA destructor" << COLOR_RESET << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with their weapon " << BLOOD_RED << Equiped.getType() << COLOR_RESET << std::endl;
}
