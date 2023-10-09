/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:17:28 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 20:33:11 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

int main()
{
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("ChumpZombie");
	return 0;
}