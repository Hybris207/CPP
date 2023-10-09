/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 00:33:08 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/09 00:33:14 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
	Animal();
	Animal(const Animal &src);

public:
	virtual ~Animal();
	Animal &operator=(const Animal &src);
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
