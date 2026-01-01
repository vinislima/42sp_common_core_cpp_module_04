/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:40:12 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 22:48:18 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "[WrongAnimal] Copy Constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "[WrongAnimal] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* WrongAnimal generic sound *" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
