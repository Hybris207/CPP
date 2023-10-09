/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:11:45 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 20:27:37 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondOne("DiamondOne");

	std::cout << "\n--- Testing attacks ---" << std::endl;
	diamondOne.attack("some target");

	std::cout << "\n--- Testing special ability ---"
			  << std::endl;
	diamondOne.whoAmI();

	return 0;
}
