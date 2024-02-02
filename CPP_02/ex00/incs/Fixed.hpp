/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 15:37:13 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define PURPLE			"\e[38;5;54m"
# define ORANGE			"\e[38;5;172m"

class Fixed {
	private:
		int					fixedPoint;
		static const int	fractionalBits = 8;

	public:
		Fixed();
		Fixed( const Fixed &src );
		Fixed& operator=( const Fixed &src );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif