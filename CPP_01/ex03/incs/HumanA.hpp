/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:49:42 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 16:27:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon 		&Equiped;

	public:
		HumanA(std::string name, Weapon &Equiped) : 
			name(name), 
			Equiped(Equiped) {};
		~HumanA() {};
		void	attack(void);
};

#endif