/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 11:40:19 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;35m"


class ClapTrap {
	private:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;

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