/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:03:01 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/31 18:33:45 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "--- ABSTRACT CLASS TEST ---" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "J Type: " << j->getType() << std::endl;
	std::cout << "I Type: " << i->getType() << std::endl;

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	return 0;
}
