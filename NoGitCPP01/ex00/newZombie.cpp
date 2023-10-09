/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:12:46 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 20:38:24 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *ZombiePtr = new Zombie(name);

	return (ZombiePtr);
}