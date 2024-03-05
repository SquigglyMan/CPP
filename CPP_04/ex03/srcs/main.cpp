/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:14:51 by llarue            #+#    #+#             */
/*   Updated: 2024/03/05 10:20:42 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "------------------- Default main from module -------------------" << std::endl << std::endl;
		
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << "------------------- Instantiate Interfaces -------------------" << std::endl << std::endl;

		std::cout << "To be uncommented to test but will result in compilation error" << std::endl;
		//ICharacter caster;
		
		//IMateriaSource newMateria;
	}
	{
		std::cout << std::endl << "------------------- Deep copy character class example -------------------" << std::endl << std::endl;

		Character	hero("Hero");
		Character	copyHero(hero);
		Character	assignedHero;

		assignedHero = hero;
		
		std::cout << "Main hero get name : " << hero.getName() << std::endl;
		std::cout << "Main copyHero get name : " << hero.getName() << std::endl;
		std::cout << "Main assignedHero get name : " << hero.getName() << std::endl;

		std::cout << std::endl;

		AMateria* cureMateria = new Cure();

		hero.equip(cureMateria);
		hero.use(0, hero);

		std::cout << "copyHero : ";
		copyHero.use(0, hero);
		std::cout << "assignedHero : ";
		assignedHero.use(0, hero);

		AMateria* iceMateria = new Cure();
		
		copyHero.equip(iceMateria);
		copyHero.use(0, copyHero);

		assignedHero.unequip(0);

		hero.unequip(0);
		copyHero.use(0, copyHero);

		delete cureMateria;
	}
	{
		std::cout << std::endl << "------------------- Character copy with materias equipped -------------------" << std::endl << std::endl;

		Character	healer("healer");
		AMateria*	healingSpell = new Cure();
		AMateria*	healingSpellClone1;
		AMateria*	healingSpellClone2;
		AMateria*	healingSpellClone3;
		
		healingSpellClone1 = healingSpell->clone();
		healingSpellClone2 = healingSpell->clone();
		healingSpellClone3 = healingSpell->clone();
		
		healer.equip(healingSpell);
		healer.equip(healingSpellClone1);
		healer.equip(healingSpellClone2);
		healer.equip(healingSpellClone3);


		Character	caster("caster");
		AMateria*	iceBolt = new Ice();
		AMateria*	iceBoltClone;

		iceBoltClone = iceBolt->clone();

		caster.equip(iceBolt);
		caster.equip(iceBoltClone);

		caster = healer;

		caster.use(0, healer);
	}
	{
		std::cout << std::endl << "------------------- Learn Materia -------------------" << std::endl << std::endl;

		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		std::cout << src->getMateria("ice") << std::endl;
		std::cout << src->getMateria("cure") << std::endl;

		delete src;
	}
	{
		std::cout << std::endl << "------------------- Default Character Constructor -------------------" << std::endl << std::endl;

		Character	caster;

		std::cout << "New challenger's name is : " << caster.getName() << std::endl;
		caster.equip(NULL);
		caster.unequip(0);

		ICharacter* enemy = new Character("enemy");
		
		caster.use(0, *enemy);
		
		delete enemy;
	}
	{
		std::cout << std::endl << "------------------- Parameter Character Constructor -------------------" << std::endl << std::endl;
		
		Character	healer("Healer");
		
		std::cout << "Your " << healer.getName() << " has arrived!" << std::endl;
		
		AMateria*	healingSpell = new Cure();

		healer.equip(healingSpell);
		
		ICharacter* ally = new Character("ally");

		healer.use(0, *ally);
		healer.unequip(0);
		healer.use(0, *ally);

		delete ally;
		delete healingSpell;
	}
	{
		std::cout << std::endl << "------------------- MateriaSource Default Constructor -------------------" << std::endl << std::endl;

		MateriaSource	materia;

		std::cout << "Get materia : " << materia.getMateria("") << std::endl;
		materia.createMateria("");
		materia.learnMateria(NULL);
	}
	{
		std::cout << std::endl << "------------------- Cure Default Constructor -------------------" << std::endl << std::endl;
		
		Cure	cureMateria;

		std::cout << "Materia instantiated : " << cureMateria.getType() << std::endl;

		ICharacter* ally = new Character("ally");
		
		cureMateria.use(*ally);
		
		AMateria*	materia;

		materia = cureMateria.clone();
		materia->use(*ally);
		
		delete ally;
		delete materia;
	}
	{
		std::cout << std::endl << "------------------- Cure Clone Materia -------------------" << std::endl << std::endl;

		AMateria* cureMateria = new Cure();
		AMateria* ClonedMateria;

		ClonedMateria = cureMateria->clone();
		std::cout << "clone cure materia" << std::endl;
		delete cureMateria;
		std::cout << ClonedMateria->getType() << std::endl;
		delete ClonedMateria;
	}
	{
		std::cout << std::endl << "------------------- Ice Default Constructor -------------------" << std::endl << std::endl;
		
		Ice	iceMateria;

		std::cout << "Materia instantiated : " << iceMateria.getType() << std::endl;

		ICharacter* ally = new Character("ally");
		
		iceMateria.use(*ally);
		
		AMateria*	materia;

		materia = iceMateria.clone();
		materia->use(*ally);
		
		delete ally;
		delete materia;
	}
	{
		std::cout << std::endl << "------------------- Ice Clone Materia -------------------" << std::endl << std::endl;

		AMateria* iceMateria = new Ice();
		AMateria* ClonedMateria;

		ClonedMateria = iceMateria->clone();
		std::cout << "clone ice materia" << std::endl;
		delete (iceMateria);
		std::cout << ClonedMateria->getType() << std::endl;

		delete ClonedMateria;
	}
	{
		std::cout << std::endl << "------------------- Clone Materias -------------------" << std::endl << std::endl;
		
		AMateria* iceMateria = new Ice();
		AMateria* cureMateria = new Cure();
		AMateria* clonedIceMateria;
		AMateria* clonedCureMateria;
		
		ICharacter*	bot = new Character("Bot");
		ICharacter*	enemyBot = new Character("Enemy Bot");
		
		clonedIceMateria = iceMateria->clone();
		clonedCureMateria = cureMateria->clone();
		
		std::cout << "New Challenger has appread, his name is : " << bot->getName() << std::endl;
		
		std::cout << std::endl;

		bot->equip(iceMateria);
		bot->equip(cureMateria);
		bot->equip(clonedIceMateria);
		bot->equip(clonedCureMateria);
		
		std::cout << std::endl;

		std::cout << "Cloned ice materia get type : " << clonedIceMateria->getType() << std::endl;
		std::cout << "Cloned cure materia get type : " << clonedCureMateria->getType() << std::endl;

		std::cout << std::endl;
		
		bot->use(0, *enemyBot);
		bot->use(1, *enemyBot);
		bot->use(2, *enemyBot);
		bot->use(3, *enemyBot);

		std::cout << std::endl;

		delete bot;
		delete enemyBot;
	}
	{
		std::cout << std::endl << "------------------- Equip More Materias -------------------" << std::endl << std::endl;

		ICharacter* hoarder = new Character("Item hoarder");
		AMateria* iceMateria1 = new Ice();
		AMateria* iceMateria2 = new Ice();
		AMateria* iceMateria3 = new Ice();
		AMateria* iceMateria4 = new Ice();
		AMateria* iceMateria5 = new Ice();
		
		hoarder->equip(iceMateria1);
		hoarder->equip(iceMateria2);
		hoarder->equip(iceMateria3);
		hoarder->equip(iceMateria4);
		hoarder->equip(iceMateria5);
		
		delete iceMateria5;
		delete hoarder;
	}
	{
		std::cout << std::endl << "------------------- Double Equip Materias -------------------" << std::endl << std::endl;

		ICharacter* hoarder = new Character("Item hoarder");
		AMateria* iceMateria = new Ice();
		
		hoarder->equip(iceMateria);
		hoarder->equip(iceMateria);
		
		delete hoarder;
	}
	{
		std::cout << std::endl << "------------------- Double Unequip Materias -------------------" << std::endl << std::endl;

		ICharacter* caster = new Character("Caster");
		AMateria* iceMateria = new Ice();
		
		caster->equip(iceMateria);

		caster->unequip(0);
		caster->unequip(0);

		caster->unequip(1);

		delete caster;
		delete iceMateria;
	}
	{
		std::cout << std::endl << "------------------- Double Use Materias -------------------" << std::endl << std::endl;

		ICharacter* caster = new Character("Caster");
		AMateria* iceMateria = new Ice();
		
		caster->equip(iceMateria);

		caster->use(0, *caster);
		caster->use(0, *caster);

		delete caster;
	}
	{
		std::cout << std::endl << "------------------- Unequip & re equip Materias -------------------" << std::endl << std::endl;

		ICharacter* caster = new Character("Caster");
		AMateria* iceMateria = new Ice();
		
		caster->equip(iceMateria);
		caster->unequip(0);
		caster->equip(iceMateria);
		caster->use(0, *caster);

		delete caster;
	}
	{
		std::cout << std::endl << "------------------- Unequip unexisting Materia -------------------" << std::endl << std::endl;

		ICharacter* caster = new Character("Caster");
		AMateria* iceMateria = new Ice();
		
		caster->equip(iceMateria);
		caster->unequip(1);
		caster->unequip(2);
		caster->unequip(3);
		caster->use(0, *caster);
		caster->unequip(0);
		caster->use(0, *caster);

		delete caster;
		delete iceMateria;
	}
	return (0);
}