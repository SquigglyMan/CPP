/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:48:49 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 09:57:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::getType( void ) {
	return (this->type);
}

void	Animal::makeSound( void ) {
	std::cout << type << "made a noise" << std::endl;
}