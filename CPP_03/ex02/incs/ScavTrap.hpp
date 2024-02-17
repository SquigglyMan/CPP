/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:31:09 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 15:12:03 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define DARKRED	"\e[38;5;88m"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &src );
		ScavTrap	&operator=( const ScavTrap &src );
		~ScavTrap();
		
		void	guardGate( void );
};

#endif