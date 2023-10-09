/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:47:47 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:47:48 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &src);
	~Cat();
	void makeSound() const;
	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
