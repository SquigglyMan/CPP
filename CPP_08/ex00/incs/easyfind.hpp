/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:55:38 by llarue            #+#    #+#             */
/*   Updated: 2024/09/12 13:02:37 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template < typename T >
void	easyfind( T& container, int x ) {
	if ( std::find( container.begin(), container.end(), x ) != container.end() )
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

# include "easyfind.tpp"

#endif