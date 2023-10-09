/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:54:13 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/05 21:08:33 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point() {}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }
