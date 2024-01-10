/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:25:44 by llarue            #+#    #+#             */
/*   Updated: 2024/01/10 09:59:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string	name;
	
	public:
		Zombie(void);
		~Zombie(void);

		void	announce( void );
		void	set_name( std::string name );
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );

#endif