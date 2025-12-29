/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:19:54 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 22:31:02 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "[Dog] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}