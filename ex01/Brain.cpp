/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 22:30:15 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/29 22:41:17 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy Constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "[Brain] Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}
