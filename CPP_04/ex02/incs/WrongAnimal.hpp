/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:57 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 16:35:08 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "Animal.hpp"

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal& src );
		virtual ~WrongAnimal( void );

		std::string	getType( void );
		void	setType( std::string newType );

		void	makeSound( void ) const;
};

#endif