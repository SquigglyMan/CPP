/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:10:05 by llarue            #+#    #+#             */
/*   Updated: 2025/01/12 19:27:30 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define MAGENTA		"\e[38;5;127m"

template< typename T >
class MutantStack : public std::stack< T > {
	public:
		MutantStack( void );
		MutantStack( const MutantStack & src );
		~MutantStack( void );

		MutantStack &operator=( const MutantStack & src );

		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator	begin( void );
		iterator	end( void );
		iterator	cbegin( void );
		iterator	cend( void );
};

#include "MutantStack.tpp"

#endif