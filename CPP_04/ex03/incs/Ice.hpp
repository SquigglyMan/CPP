/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:52:47 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 16:46:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice( Ice const &src );
		Ice& operator=( Ice const &src );
		~Ice();

		virtual AMateria*	clone() const;

		virtual void	use( ICharacter& target );	
};

#endif