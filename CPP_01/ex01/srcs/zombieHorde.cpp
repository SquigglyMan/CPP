/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:34:49 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 13:08:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name) {
	Zombie *Horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return (Horde);
}