/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:16:59 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/14 18:12:16 by amaligno         ###   ########.fr       */
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

Point::Point(const Point &copy)
{
	*this = copy;
}

Point	&Point::operator=(const Point &src)
{
	this->pos_x = src.get_x();
	this->pos_y = src.get_y();
}



float	Point::x(void) const
{	
	std::cout << ".x member function, pox_x value: " << pos_x << '\n';
	return(this->pos_x.toFloat());
}

float	Point::y(void) const
{
	return(this->pos_y.toFloat());
}