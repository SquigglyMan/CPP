/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:06 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 16:01:02 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*Equiped;

	public:
		HumanB();
		HumanB( std::string name );
		~HumanB();

		void	attack( void );
		void	setWeapon( Weapon &Equiped );
};

#endif