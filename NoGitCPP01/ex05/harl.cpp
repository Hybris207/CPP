/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:42:16 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/02 18:59:26 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

void Harl::debug()
{
	std::cout << "My CPP is really bad." << std::endl;
}

void Harl::info()
{
	std::cout << "I prefer CSS, it's more complete and complex." << std::endl;
}

void Harl::warning()
{
	std::cout << "SWMG rules" << std::endl;
}

void Harl::error()
{
	std::cout << "I'm gonna explode fr tho" << std::endl;
}

void Harl::complain(const std::string &level)
{
	typedef void (Harl::*MemberFunctionPointer)();
	std::map<std::string, MemberFunctionPointer> complaints;

	complaints["DEBUG"] = &Harl::debug;
	complaints["INFO"] = &Harl::info;
	complaints["WARNING"] = &Harl::warning;
	complaints["ERROR"] = &Harl::error;

	if (complaints.find(level) != complaints.end())
	{
		(this->*complaints[level])();
	}
	else
	{
		std::cout << "Invalid level!" << std::endl;
	}
}