/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:08:39 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:52:32 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Je suis un fidèle toutou !" << std::endl;
}
