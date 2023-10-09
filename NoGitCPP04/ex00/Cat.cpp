/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:08:59 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:52:22 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Je suis moins bien qu'un chien !" << std::endl;
}
