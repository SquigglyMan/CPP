/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:37:12 by llarue            #+#    #+#             */
/*   Updated: 2024/05/17 14:54:47 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter( T *array, size_t arrSize, void (*f)( T & ) ) {
	size_t	i;

	for (i = 0; i < arrSize; i++)
		f(array[i]);
}

#endif