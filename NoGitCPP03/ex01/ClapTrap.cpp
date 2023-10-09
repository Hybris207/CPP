/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:43:10 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/06 21:47:35 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name)
	: Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap named " << Name << " has been constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << Name << " has been destructed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "ClapTrap " << Name << " has no energy or hit points to attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints == 0)
	{
		std::cout << "ClapTrap " << Name << " already has 0 hit points and cannot take more damage!" << std::endl;
		return;
	}
	HitPoints -= std::min(amount, HitPoints);
	std::cout << "ClapTrap " << Name << " took damage and now has " << HitPoints << " hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << Name << " has no energy to be repaired!" << std::endl;
		return;
	}
	HitPoints += amount;
	EnergyPoints--;
	std::cout << "ClapTrap " << Name << " has been repaired for " << amount << " and now has " << HitPoints << " hit points." << std::endl;
}
