/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:03:01 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 23:17:21 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "TEST 1: Working Polymorphism" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "J Type: " << j->getType() << " " << std::endl;
	std::cout << "I Type: " << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "TEST 2: Wrong Polymorphism" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Calling makeSound on WrongCat (expecting WrongAnimal sound):" << std::endl;
	wrongCat->makeSound();

	std::cout << std::endl;
	wrongMeta->makeSound();

	std::cout << std::endl;
	std::cout << "--- DESTRUCTORS ---" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;

	return 0;
}