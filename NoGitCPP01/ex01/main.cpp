/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:02:50 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 21:04:35 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.cpp"

int main()
{
	Zombie unnamedZombie;
	unnamedZombie.announce();

	Zombie namedZombie("StackZombie");
	namedZombie.announce();

	int N = 3;
	Zombie *horde = zombieHorde(N, "HordeZombie");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;

	return 0;
}
