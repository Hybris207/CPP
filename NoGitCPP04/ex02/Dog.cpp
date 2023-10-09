/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:27:27 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:51:33 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	brain = new Brain(*src.brain);
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Je suis un chien !" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return brain->getIdea(index);
}
