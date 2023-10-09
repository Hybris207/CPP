/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:15:22 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/06 21:15:23 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap clapOne("ClapOne");
	ClapTrap clapTwo("ClapTwo");

	std::cout << "\n--- Testing attacks ---" << std::endl;
	clapOne.attack("some target");
	clapTwo.attack("another target");

	std::cout << "\n--- Testing takeDamage ---" << std::endl;
	clapOne.takeDamage(5);
	clapTwo.takeDamage(3);

	std::cout << "\n--- Testing repairs ---" << std::endl;
	clapOne.beRepaired(3);
	clapTwo.beRepaired(5);

	return 0;
}
