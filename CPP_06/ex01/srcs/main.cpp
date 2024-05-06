/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:27:21 by llarue            #+#    #+#             */
/*   Updated: 2024/05/05 12:18:05 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data	*data = new Data;
	uintptr_t	rawData;
	Data	*newData;
	
	data->pokedexNumber = 1;
	data->pokemon = "Bulbasaur";
	data->firstType = Grass;
	data->secondType = Poison;

	std::cout << "Original data\t\t: " << data << std::endl;
	rawData = Serializer::serialize(data);
	std::cout << "Serialized data\t\t: " << rawData << std::endl;
	newData = Serializer::deserialize(rawData);
	std::cout << "Deserialized data\t: " << newData << std::endl;
	
	delete (data);
	return (0);
}