/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:46:19 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 21:00:37 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

class Zombie
{

private:
	std::string pr_name;

public:
	Zombie()
	{
		pr_name = "Unnamed";
	}

	void announce(void)
	{
		std::cout << pr_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

	void setName(std::string name) { pr_name = name; }

	Zombie(std::string name)
	{
		pr_name = name;
	}

	~Zombie()
	{
		std::cout << pr_name << ": Got deleted" << std::endl;
	}
};
