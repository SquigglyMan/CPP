/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:48:27 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 17:07:50 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
	protected:
		std::string	type;

	public:
		Animal( void );
		Animal( const Animal& src );
		virtual Animal &operator=( const Animal& src );
		virtual ~Animal( void );

		std::string	getType( void ) const;
		void	setType( std::string newType );

		virtual void	makeSound( void ) const;

		virtual Brain	*getBrain( void ) const;
};

#endif