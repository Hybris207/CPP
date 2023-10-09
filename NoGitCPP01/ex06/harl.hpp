/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:57:04 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/02 20:03:09 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <map>

class Harl
{
public:
	enum LogLevel
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		UNKNOWN
	};

	LogLevel stringToLogLevel(const std::string &level);
	void filterComplaints(LogLevel level);
};

#endif
