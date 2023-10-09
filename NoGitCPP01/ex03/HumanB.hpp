/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:20:55 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 23:16:34 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>
class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string n);
	void setWeapon(Weapon &w);
	void attack();
};

#endif