/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:38 by llarue            #+#    #+#             */
/*   Updated: 2024/01/14 18:07:25 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int					integer;
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