/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:25:46 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 15:51:13 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { 
	std::cout << BOLD_PURPLE << this->name << " constructor" << COLOR_RESET << std::endl;
}

Zombie::Zombie( std::string name ) : name(name) {
	std::cout << BOLD_PURPLE << this->name << " constructor" << COLOR_RESET << std::endl;
}

Zombie::~Zombie() { 
	std::cout << BOLD_PURPLE << this->name << " destructor" << COLOR_RESET << std::endl;
}

void	Zombie::announce(void) {
		std::cout << name << ": " << BLOOD_RED << "BraiiiiiiinnnzzzZ..." << COLOR_RESET << std::endl;
}
