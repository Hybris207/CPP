/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:27:53 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:28:10 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;

	Dog d1;
	d1.setIdea(0, "Chase tail");
	Dog d2 = d1;
	d2.setIdea(0, "Chase cat");
	std::cout << d1.getIdea(0) << std::endl;
	std::cout << d2.getIdea(0) << std::endl;

	return 0;
}
