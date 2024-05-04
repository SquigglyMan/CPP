/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:56:05 by llarue            #+#    #+#             */
/*   Updated: 2024/05/04 11:19:41 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

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

class ScalarConverter {
	private:
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const & src );
		
		ScalarConverter	&operator=( ScalarConverter const & src );

	public:
		~ScalarConverter( void );

		static void	convert( std::string const & literal );
};

#endif