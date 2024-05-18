/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:14:42 by llarue            #+#    #+#             */
/*   Updated: 2024/05/18 10:44:49 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ) {

	Array<int>	n(5);

	try {
		std::cout << n[4] << std::endl;
		std::cout << n.size() << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}