/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:18:42 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 21:18:45 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong cat sound!" << std::endl;
}
