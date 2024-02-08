/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/07 16:12:39 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define ORANGE		"\e[38;5;215m"

class ClapTrap {
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:

		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& src );
		ClapTrap &operator=( const ClapTrap& src );
		ClapTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage );
		~ClapTrap();

		void		attack( const std::string &target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		std::string	getName( void );
};

#endif