/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:54:26 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 23:02:37 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "[WrongCat] Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy Constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "[WrongCat] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat noise (Should not be heard if polymorphism fails)!" << std::endl;
}
