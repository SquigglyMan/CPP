/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 06:33:37 by llarue           ###   ########.fr       */
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
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;

	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& src );
		ClapTrap &operator=( const ClapTrap& src );
		~ClapTrap();

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
};

#endif