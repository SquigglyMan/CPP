/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:27:21 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 13:52:23 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data		*data = new Data;
	uintptr_t	rawData;
	Data		*newData;
	
	data->pokedexNumber = 1;
	data->pokemon = "Bulbasaur";
	data->firstType = Grass;
	data->secondType = Poison;

	std::cout << GREEN << "Data information pre serialization : " << std::endl << *data << std::endl;
	std::cout << "Original data\t\t: " << data << COLOR_RESET << std::endl << std::endl;
	
	rawData = Serializer::serialize(data);
	std::cout << MAGENTA << "Serialized data\t\t: " << rawData << COLOR_RESET << std::endl << std::endl;
	
	std::cout << RED << "Data information post serialization : " << std::endl << *data << COLOR_RESET << std::endl << std::endl;
	
	newData = Serializer::deserialize(rawData);
	std::cout << MAGENTA << "Deserialized data\t: " << newData << COLOR_RESET << std::endl << std::endl;
	
	std::cout << BLUE << "Data information post deserialization : " << std::endl << *data << COLOR_RESET << std::endl;
	
	delete (data);
	return (0);
}