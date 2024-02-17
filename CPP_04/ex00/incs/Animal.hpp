/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:48:27 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 16:23:01 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;35m"

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
};

#endif