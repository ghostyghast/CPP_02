/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:16:59 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/19 18:50:33 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): pos_x(0), pos_y(0)
{
}

Point::Point(float x, float y): pos_x(x), pos_y(y)
{
}

Point::~Point()
{
}

Point::Point(const Point &copy) : pos_x(copy.get_x()), pos_y(copy.get_y())
{
}

Point	&Point::operator=(const Point &src)
{
	(void)src;
	return (*this);
}

Fixed	Point::get_x(void) const
{
	return (this->pos_x);
}

Fixed	Point::get_y(void) const
{
	return (this->pos_y);
}

float	Point::x(void) const
{	
	return(this->pos_x.toFloat());
}

float	Point::y(void) const
{
	return(this->pos_y.toFloat());
}