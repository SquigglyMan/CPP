/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:22 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 18:16:05 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					integer;
		static const int	fractionalBits = 8;

	public:
		Fixed( void );
		Fixed( const int FixedPoint );
		Fixed( const float FloatingPoint );
		Fixed( const Fixed &src );
		Fixed& operator=( const Fixed &src );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif