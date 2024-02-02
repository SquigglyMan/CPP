/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:37:49 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 12:18:14 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie *horde;

	N = -3;
	horde = zombieHorde(N, "Alice");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	if (horde)
		delete [](horde);
	return (0);
}