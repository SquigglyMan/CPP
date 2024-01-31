/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:46:24 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 17:23:48 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( AMateria const &src );
		AMateria& operator=( AMateria const &src );
		virtual ~AMateria();

		std::string const & getType() const;
		
		virtual AMateria*	clone() const = 0;
		virtual void	use( ICharacter& target );
};

#endif