/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 13:49:55 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define C_RESET	"\e[0m"
# define ORANGE		"\e[38;5;215m"

class ClapTrap {
	private:
		std::string		name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;

	public:

		ClapTrap( std::string name );
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap& op);
		~ClapTrap();

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
};

#endif