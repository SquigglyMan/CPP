/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:05:01 by llarue            #+#    #+#             */
/*   Updated: 2024/01/31 16:32:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	inventory[4];

	public:
		Character();
		Character( std::string const &name );
		Character( Character const &src );
		Character& operator=( Character const &src );
		~Character();

		std::string const&	getName() const;
		void	equip ( AMateria* m );
		void	unequip( int idx );
		void	use( int idx, ICharacter& target );
};

#endif