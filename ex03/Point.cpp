/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:16:59 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/18 22:52:30 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::Point(Point &copy)
{
	*this = copy;
}

float	Point::get_x(void)
{
	return(this->x.toFloat());
}

float	Point::get_y(void)
{
	return(this->y.toFloat());
}