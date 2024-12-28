/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:24:22 by llarue            #+#    #+#             */
/*   Updated: 2024/12/28 11:42:28 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define MAGENTA		"\e[38;5;127m"

class RPN : public std::stack<int> {
	public:
		RPN( void );
		RPN( RPN const & src );
		~RPN( void );

		RPN &operator=( RPN const & src );

		/* Operations */
		bool	calculate( char input );
		void	add( int a, int b );
		void	sub( int a, int b );
		void	mul( int a, int b );
		void	div( int a, int b );
};

#endif