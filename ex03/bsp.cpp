/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:22:53 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/19 18:53:38 by amaligno         ###   ########.fr       */
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
	float a0 , a1, a2, a3;
	
	a0 = area(a, b, c);
	a1 = area(point, a, b);
	a2 = area(point, b, c);
	a3 = area(point, a, c);
	
	cout << "a0: " << a0<< '\n';
	cout << "a1: " << a1 << '\n';
	cout << "a2: " << a2 << '\n';
	cout << "a3: " << a3 << '\n';
	if (!a1 || !a2 || !a3)
		return (false);
	else if (a1 + a2 + a3 == a0)
		return (true);
	return (false);
}
