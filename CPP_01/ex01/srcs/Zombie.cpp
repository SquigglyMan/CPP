/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:34:51 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 15:49:04 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << BOLD_PURPLE << "Zombie constructor" << COLOR_RESET << std::endl;
}

Zombie::~Zombie() {
	std::cout << BOLD_PURPLE << "Zombie destructor" << COLOR_RESET << std::endl;
}

void	Zombie::set_name( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << name << ": " << BLOOD_RED << "BraiiiiiiinnnzzzZ..." << COLOR_RESET << std::endl;
}