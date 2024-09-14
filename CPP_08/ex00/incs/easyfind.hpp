/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:55:38 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 16:48:04 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

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

template < typename T >
void	easyfind( T& container, int x ) {
	if ( std::find( container.begin(), container.end(), x ) != container.end() )
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

#endif