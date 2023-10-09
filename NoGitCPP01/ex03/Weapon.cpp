/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:31:07 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 23:21:34 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) { type = name; }
const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string &newType)
{
	type = newType;
}