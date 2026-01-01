/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:19:54 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/29 23:26:28 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "[Dog] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}