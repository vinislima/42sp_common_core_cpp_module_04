/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:03:27 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/31 18:24:20 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		virtual	~Animal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif