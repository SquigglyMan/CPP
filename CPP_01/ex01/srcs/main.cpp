/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:37:49 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 13:09:06 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;

	horde = zombieHorde(5, "Alice");
	for(int i = 0; i < 5; i++)
		horde[i].announce();
	delete[](horde);
	return (0);
}