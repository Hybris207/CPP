/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:39:47 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 23:17:23 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(&w) {}

void HumanA::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void HumanA::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon!" << std::endl;
	}
}
