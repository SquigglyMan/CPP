/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:04:14 by llarue            #+#    #+#             */
/*   Updated: 2024/01/15 13:14:06 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;

	public:
		ClapTrap::name;
		
		DiamondTrap( std::string name );
		
		void	whoAmI();
};

#endif