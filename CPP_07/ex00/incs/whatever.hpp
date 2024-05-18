/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:18:15 by llarue            #+#    #+#             */
/*   Updated: 2024/05/16 23:00:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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