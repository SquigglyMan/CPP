/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:47:44 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 17:47:40 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout << "------------------- Default main from module -------------------" << std::endl << std::endl;
		
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	{
		std::cout << "------------------- Default Animal constructor -------------------" << std::endl << std::endl;

		Animal	defaultAnimal;

		std::cout << "makeSound : ";
		defaultAnimal.makeSound();
		std::cout << "get type : " << defaultAnimal.getType() << std::endl;
		defaultAnimal.setType("Another Animal");
		std::cout << "get type : " << defaultAnimal.getType() << std::endl;
	}
	{
		std::cout << "------------------- Animal Copy constructor -------------------" << std::endl << std::endl;
		
		Animal	defaultAnimal;
		Animal	AnimalCopy(defaultAnimal);

		std::cout << "get type AnimalCopy : " << AnimalCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		AnimalCopy.makeSound();
		std::cout << "set type defaultAnimal" << std::endl;
		defaultAnimal.setType("New animal type");
		std::cout << "get type AnimalCopy : " << AnimalCopy.getType() << std::endl;
		std::cout << "get type defaultAnimal : " << defaultAnimal.getType() << std::endl;
	}
	{
		std::cout << "------------------- Animal Copy assignation operator -------------------" << std::endl << std::endl;

		Animal	defaultAnimal;
		Animal	AnimalCopy;

		AnimalCopy = defaultAnimal;

		std::cout << "get type AnimalCopy : " << AnimalCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		AnimalCopy.makeSound();
		std::cout << "set type defaultAnimal" << std::endl;
		defaultAnimal.setType("New animal type");
		std::cout << "get type AnimalCopy : " << AnimalCopy.getType() << std::endl;
		std::cout << "get type defaultAnimal : " << defaultAnimal.getType() << std::endl;
	}
	{
		std::cout << "------------------- Default Cat constructor -------------------" << std::endl << std::endl;

		Cat	defaultCat;

		std::cout << "make sound : ";
		std::cout << "makeSound : ";
		defaultCat.makeSound();
		std::cout << "get type : " << defaultCat.getType() << std::endl;
		defaultCat.setType("Calico Cat");
		std::cout << "get type : " << defaultCat.getType() << std::endl;
	}
	{
		std::cout << "------------------- Cat Copy constructor -------------------" << std::endl << std::endl;
		
		Cat	defaultCat;
		Cat	CatCopy(defaultCat);

		std::cout << "get type CatCopy : " << CatCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		CatCopy.makeSound();
		std::cout << "set type defaultCat" << std::endl;
		defaultCat.setType("New Cat type");
		std::cout << "get type CatCopy : " << CatCopy.getType() << std::endl;
		std::cout << "get type defaultCat : " << defaultCat.getType() << std::endl;
	}
	{
		std::cout << "------------------- Cat Copy assignation operator -------------------" << std::endl << std::endl;

		Cat	defaultCat;
		Cat	CatCopy;

		CatCopy = defaultCat;

		std::cout << "get type CatCopy : " << CatCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		CatCopy.makeSound();
		std::cout << "set type defaultCat" << std::endl;
		defaultCat.setType("New Cat type");
		std::cout << "get type CatCopy : " << CatCopy.getType() << std::endl;
		std::cout << "get type defaultCat : " << defaultCat.getType() << std::endl;
	}
	{
		std::cout << "------------------- Dog module test -------------------" << std::endl << std::endl;

		Dog basic;
		{
			Dog tmp = basic;
			std::cout << "tmp.getBrain = " << tmp.getBrain() << std::endl;
			std::cout << "basic.getBrain = " << basic.getBrain() << std::endl;
		}
		std::cout << "basic.getBrain = " << basic.getBrain() << std::endl;
	}
	{
		std::cout << "------------------- Default Dog constructor -------------------" << std::endl << std::endl;

		Dog	defaultDog;

		std::cout << "make sound : ";
		std::cout << "makeSound : ";
		defaultDog.makeSound();
		std::cout << "get type : " << defaultDog.getType() << std::endl;
		defaultDog.setType("Husky");
		std::cout << "get type : " << defaultDog.getType() << std::endl;
	}
	{
		std::cout << "------------------- Dog Copy constructor -------------------" << std::endl << std::endl;
		
		Dog	defaultDog;
		Dog	DogCopy(defaultDog);

		std::cout << "get type DogCopy : " << DogCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		DogCopy.makeSound();
		std::cout << "set type defaultDog" << std::endl;
		defaultDog.setType("New Dog type");
		std::cout << "get type DogCopy : " << DogCopy.getType() << std::endl;
		std::cout << "get type defaultDog : " << defaultDog.getType() << std::endl;
	}
	{
		std::cout << "------------------- Dog Copy assignation operator -------------------" << std::endl << std::endl;

		Dog	defaultDog;
		Dog	DogCopy;

		DogCopy = defaultDog;

		std::cout << "get type DogCopy : " << DogCopy.getType() << std::endl;
		std::cout << "makeSound : ";
		DogCopy.makeSound();
		std::cout << "set type defaultDog" << std::endl;
		defaultDog.setType("New Dog type");
		std::cout << "get type DogCopy : " << DogCopy.getType() << std::endl;
		std::cout << "get type defaultDog : " << defaultDog.getType() << std::endl;
	}
	return (0);
}