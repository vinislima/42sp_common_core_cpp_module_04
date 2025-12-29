/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:08:55 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 22:16:43 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal] Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "[Animal] Copy Constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "[Animal] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "* Animal undefined noises *" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}