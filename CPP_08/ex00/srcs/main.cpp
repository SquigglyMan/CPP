/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:55:08 by llarue            #+#    #+#             */
/*   Updated: 2024/09/12 13:03:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void ) {
	
	int	container[] = {324, 131, 13, 324, 3653};
	int	x = 13;

	std::vector< int >	VContainer( container, container + sizeof( container ) / sizeof( int ));
	std::list< int >	LContainer( container, container + sizeof( container ) / sizeof( int ));

	easyfind(VContainer, x);
	easyfind(VContainer, 14);
	easyfind(LContainer, x);
	easyfind(LContainer, 15);
	
	return (0);
}