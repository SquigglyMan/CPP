/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:33:39 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 15:48:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define BOLD_PURPLE	"\e[1;38;5;54m"
# define BLOOD_RED		"\e[38;5;124m"

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();

		void	set_name( std::string name );
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif