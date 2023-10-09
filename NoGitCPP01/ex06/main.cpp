/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:58:44 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:05 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " log level" << std::endl;
		return 1;
	}

	Harl harl;
	Harl::LogLevel level = harl.stringToLogLevel(argv[1]);
	harl.filterComplaints(level);

	return 0;
}
