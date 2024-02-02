/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:34:49 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 12:18:27 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	if (N <= 0)
	{
		std::cout << "Error: Positve non zero integers only" << std::endl;
		return (NULL);
	}
	Zombie *Horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return (Horde);
}