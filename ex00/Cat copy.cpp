/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:19:54 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 22:30:59 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "[Cat] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}