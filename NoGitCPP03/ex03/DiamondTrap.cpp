/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:10:14 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 20:24:14 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_ClapTrapName"), ScavTrap(name), FragTrap(name), Name(name)
{
	std::cout << "DiamondTrap named " << Name << " has been constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap named " << Name << " has been destructed!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << Name << " and my ClapTrap name is " << ClapTrap::Name << "." << std::endl;
}
