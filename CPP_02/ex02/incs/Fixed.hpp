/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:52:22 by llarue            #+#    #+#             */
/*   Updated: 2024/01/13 11:25:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					integer;
		static const int	fractional_bits = 8;

	public:
		Fixed( void );
		Fixed( const int FixedPoint);
		Fixed( const float FloatingPoint);
		Fixed( const Fixed &copy );
		Fixed& operator=( const Fixed &src );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float			toFloat( void ) const;
		int				toInt( void ) const;

		bool	operator>(const Fixed& comp) const;
		bool	operator<(const Fixed& comp) const;
		bool	operator>=(const Fixed& comp) const;
		bool	operator<=(const Fixed& comp) const;
		bool	operator==(const Fixed& comp) const;
		bool	operator!=(const Fixed& comp) const;

		Fixed	operator+(const Fixed	&op) const;
		Fixed	operator-(const Fixed	&op) const;
		Fixed	operator*(const Fixed	&op) const;
		Fixed	operator/(const Fixed	&op) const;

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );
	
		static Fixed&	min( Fixed &a, Fixed &b );
		static const Fixed&	min( const Fixed &a, const Fixed &b );
		static Fixed&	max( Fixed &a, Fixed &b );
		static const Fixed&	max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif