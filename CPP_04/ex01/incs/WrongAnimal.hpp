/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:00:57 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 10:57:30 by llarue           ###   ########.fr       */
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
		~WrongAnimal( void );

		std::string	getType( void );
		void	setType( std::string newType );

		void	makeSound( void ) const;
};

#endif