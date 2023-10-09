/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:35:32 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/06 21:57:41 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap named " << Name << " has been constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap named " << Name << " has been destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "ScavTrap " << Name << " has no energy or hit points to attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!" << std::endl;
}
