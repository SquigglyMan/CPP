/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:55:39 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 16:57:05 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define PINK			"\e[38;5;132m"


class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		Brain( const Brain& src );
		Brain& operator=( const Brain& src );
		~Brain( void );
};

#endif