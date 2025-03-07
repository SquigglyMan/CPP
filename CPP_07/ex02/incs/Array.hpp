/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:57:08 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 14:19:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define BROWN			"\e[38;5;130m"
# define MAGENTA		"\e[38;5;127m"

template<typename T>
class Array {
	private:
		T				*_array;
		unsigned int	_arraySize;
	
	public:
		Array( void );
		Array( Array const & src );
		Array( unsigned int n );
		~Array( void );

		Array	&operator=( Array const & src );
		T		&operator[]( unsigned int index );

		unsigned int	size( void ) const;
};

# include "Array.tpp"

#endif