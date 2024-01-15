/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:22:05 by llarue            #+#    #+#             */
/*   Updated: 2024/01/15 12:57:22 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

# define WHEAT	"\e[38;5;230m"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name );
		~FragTrap();

		void	highFiveSGuys( void );
};

#endif