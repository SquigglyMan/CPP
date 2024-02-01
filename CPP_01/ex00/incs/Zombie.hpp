/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:25:44 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 15:42:18 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define BOLD_PURPLE	"\e[1;38;5;54m"

class Zombie {
	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();

		void	announce( void );
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );

#endif