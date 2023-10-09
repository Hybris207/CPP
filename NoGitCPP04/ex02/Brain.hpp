/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:26:46 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/08 23:26:48 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &src);
	~Brain();
	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
