/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:26:27 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 14:23:48 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

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

class Base {
	public:
		virtual ~Base( void );
};

Base*	generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif