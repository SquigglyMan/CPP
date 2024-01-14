/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:06 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 17:02:16 by llarue           ###   ########.fr       */
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
		HumanB( std::string name );

		void	attack( void );
		void	setWeapon( Weapon &Equiped );
};

#endif