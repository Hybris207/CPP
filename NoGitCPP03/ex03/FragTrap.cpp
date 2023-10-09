/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:10:05 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/06 22:29:36 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name)
	: ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap named " << Name << " has been constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap named " << Name << " has been destructed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (EnergyPoints == 0 || HitPoints == 0)
	{
		std::cout << "FragTrap " << Name << " has no energy or hit points to attack!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " requests for a positive high five!" << std::endl;
}