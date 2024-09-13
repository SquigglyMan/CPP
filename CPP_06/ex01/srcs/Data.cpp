/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:38:46 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 13:44:21 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::ostream&	operator<<( std::ostream& stream, Data &src ) {
	stream << "Pokedex number\t\t: " << src.pokedexNumber << std::endl;
	stream << "Pokemon\t\t\t: " << src.pokedexNumber << std::endl;
	stream << "First type\t\t: " << src.firstType << std::endl;
	stream << "Second type\t\t: " << src.secondType << std::endl;
	return (stream);
}