/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:57:40 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/02 20:04:30 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

void Harl::filterComplaints(LogLevel level)
{
	switch (level)
	{
	case DEBUG:
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
		// fall through
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
		// fall through
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
		// fall through
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
		break;
	case UNKNOWN:
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

Harl::LogLevel Harl::stringToLogLevel(const std::string &level)
{
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	return UNKNOWN;
}
