/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 00:32:11 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/09 00:39:45 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal myAnimal;

	Dog myDog;
	Cat myCat;

	Animal *animalPtr1 = &myDog;
	Animal *animalPtr2 = &myCat;

	std::cout << "Dog Type: " << myDog.getType() << std::endl;
	myDog.makeSound();

	std::cout << "Cat Type: " << myCat.getType() << std::endl;
	myCat.makeSound();

	std::cout << "Using Animal Pointer for Dog: " << animalPtr1->getType() << std::endl;
	animalPtr1->makeSound();

	std::cout << "Using Animal Pointer for Cat: " << animalPtr2->getType() << std::endl;
	animalPtr2->makeSound();

	return 0;
}
