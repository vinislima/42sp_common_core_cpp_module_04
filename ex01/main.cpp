/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:03:01 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/30 22:37:43 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 4

int main()
{
	std::cout << "--- SUBJECT MAIN TEST ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;

	std::cout << "--- ARRAY TEST ---" << std::endl;
	Animal* animals[N_ANIMALS];

	for (int k = 0; k < N_ANIMALS / 2; k++)
	{
		animals[k] = new Dog();
	}
	for (int k = N_ANIMALS / 2; k < N_ANIMALS; k++)
	{
		animals[k] = new Cat();
	}

	std::cout << "\n[Sounds Check]" << std::endl;
	for (int k = 0; k < N_ANIMALS; k++)
	{
		animals[k]->makeSound();
	}

	std::cout << "\n[Deleting Array]" << std::endl;
	for (int k = 0; k < N_ANIMALS; k++)
	{
		delete animals[k];
	}

	std::cout << std::endl;

	std::cout << "--- DEEP COPY TEST ---" << std::endl;
	Dog basic;
	basic.getBrain()->ideas[0] = "I want food";
	{
		Dog tmp = basic;
		std::cout << "Basic Idea: " << basic.getBrain()->ideas[0] << std::endl;
		std::cout << "Tmp Idea: " << tmp.getBrain()->ideas[0] << std::endl;

		tmp.getBrain()->ideas[0] = "I want to sleep";

		std::cout << "--- After changing Tmp's mind ---" << std::endl;
		std::cout << "Basic Idea (Should be 'I want food'): " << basic.getBrain()->ideas[0] << std::endl;
		std::cout << "Tmp Idea (Should be 'I want to sleep'): " << tmp.getBrain()->ideas[0] << std::endl;
	}

	std::cout << "\nExiting main..." << std::endl;
	return 0;
}
