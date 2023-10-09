/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:26:59 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:27:00 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = src.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = src.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return ideas[index];
	}
	return "";
}
