/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:04:23 by gde-carv          #+#    #+#             */
/*   Updated: 2023/10/05 21:04:31 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed detT = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY());

	Fixed alpha = ((point.getX() - b.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (point.getY() - b.getY())) / detT;
	Fixed beta = ((point.getX() - c.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (point.getY() - c.getY())) / detT;
	Fixed gamma = 1.0f - alpha - beta;

	return alpha > 0.0f && beta > 0.0f && gamma > 0.0f;
}