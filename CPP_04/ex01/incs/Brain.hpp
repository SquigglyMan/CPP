/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:55:39 by llarue            #+#    #+#             */
/*   Updated: 2024/02/17 17:12:32 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define PURPLE			"\e[38;5;105m"


class Brain {
	private:

	public:
		std::string	ideas[100];

		Brain( void );
		Brain( const Brain& src );
		Brain& operator=( const Brain& src );
		~Brain( void );
};

#endif