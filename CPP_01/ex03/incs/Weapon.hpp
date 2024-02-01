/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:48:39 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 16:04:06 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define BOLD_PURPLE	"\e[1;38;5;54m"
# define BLOOD_RED		"\e[38;5;124m"

class Weapon {
	private:
		std::string type;
	
	public:
		Weapon();
		Weapon( std::string type  = "club" );
		~Weapon();

		std::string const	&getType( void );
		void	setType( std::string new_type );
};

#endif