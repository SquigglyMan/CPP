/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:10:14 by llarue            #+#    #+#             */
/*   Updated: 2024/09/18 23:27:48 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <list>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define MAGENTA		"\e[38;5;127m"

class Span {
	private:
		unsigned int	_N;
		std::list<int>	_span;
		bool			_isSorted;

	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span &src );
		~Span( void );

		Span	&operator=( const Span & src );

		void	addNumber( int n );
		void	addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
		
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class ISpanException : public std::exception {
			public:
				virtual const char* what() const throw() = 0;
		};
		class TooManyElementsException : public ISpanException {
			public:
				const char*	what() const throw();	
		};

		class NotEnoughElementsException : public	ISpanException {
			public:
				const char*	what() const throw();
		};
};

#endif