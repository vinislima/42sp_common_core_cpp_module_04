/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:19:54 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/29 23:34:36 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "[Cat] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->brain;
}