/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:18:15 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 10:11:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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

template <typename T>
void swap( T &x, T &y ) {
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min( T x, T y ) {
	if (y <= x)
		return (y);
	else 
		return (x);
}

template <typename T>
T max( T x, T y ) {
	if (x >= y)
		return (x);
	else
		return (y);
}
#endif