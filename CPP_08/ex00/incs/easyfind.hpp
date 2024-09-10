/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:55:38 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 16:04:15 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template<typename T>
typename T::iterator easyfind( T& container, int x ) {
	typename T::iterator it = std::find(container.behin(), container.end(), x);
	return (it);
}

# include "easyfind.tpp"

#endif