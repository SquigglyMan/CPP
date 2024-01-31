/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:53:04 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 16:43:12 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure( Cure const &src );
		Cure& operator=( Cure const &src );
		~Cure();

		virtual AMateria*	clone() const;
		virtual void	use( ICharacter& target );
};

#endif