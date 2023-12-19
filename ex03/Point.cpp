/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:16:59 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/19 22:47:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): pos_x(0), pos_y(0)
{
}

Point::Point(float x, float y): pos_x(x), pos_y(y)
{
}

Point::Point(Point &copy)
{
	*this = copy;
}

float	Point::x(void) const
{
	return(this->pos_x.toFloat());
}

float	Point::y(void) const
{
	return(this->pos_y.toFloat());
}