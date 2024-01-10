/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:48:39 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 16:28:23 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string type;
	
	public:
		Weapon(std::string type = "club") : type(type) {};
		~Weapon() {};

		std::string const &getType(void);
		void setType(std::string new_type);
};

#endif