/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:47:55 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:52:00 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	brain = new Brain(*src.brain);
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Je suis moins bien qu'un chien !" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}
