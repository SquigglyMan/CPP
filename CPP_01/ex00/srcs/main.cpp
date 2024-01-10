/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:34:37 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 09:47:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr;

	ptr = newZombie("Pointer");
	ptr->announce();
	randomChump("Variable");
	delete(ptr);
	return (0);
}