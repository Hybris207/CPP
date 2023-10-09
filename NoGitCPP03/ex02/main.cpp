/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:10:15 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/07 00:02:08 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragOne("Destroyer");

	std::cout << "\n--- Testing attacks ---" << std::endl;
	fragOne.attack("some target");

	std::cout << "\n--- Testing special abilities ---" << std::endl;
	fragOne.highFivesGuys();

	return 0;
}