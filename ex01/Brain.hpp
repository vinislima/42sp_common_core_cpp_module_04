/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 22:27:08 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/29 22:30:00 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string	ideas[100];

		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();
};

#endif
