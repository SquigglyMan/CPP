/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/01/12 15:44:26 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int					integer;
		static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed( const Fixed &copy );
		Fixed& operator=( const Fixed &src );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif