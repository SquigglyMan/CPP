/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:06 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 16:45:38 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*Equiped;
		std::string	name;

	public:
		HumanB(std::string name = "Jim") : name(name) {};
		~HumanB() {};

		void	attack(void);
		void	setWeapon(Weapon &Equiped);
};

#endif