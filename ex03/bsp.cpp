/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:22:53 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/16 13:00:04 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Point.hpp"

using std::cout;

static float area (const Point p1, const Point p2, const Point p3)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area =	(
			( p1.x() * ( p2.y() - p3.y() ) )
			+ ( p2.x() * ( p3.y() - p1.y() ) )
			+ ( p3.x() * ( p1.y() - p2.y() ) )
			)
			/ 2;

	if (area >= 0)
		return (area);
	return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float d0 , d1, d2, d3;
	
	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);
	
	cout << "d0: " << d0<< '\n';
	cout << "d1: " << d1 << '\n';
	cout << "d2: " << d2 << '\n';
	cout << "d3: " << d3 << '\n';
	if ( d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	else if ( d1 + d2 + d3 == d0 )
		return (true);
	return (false);
}
