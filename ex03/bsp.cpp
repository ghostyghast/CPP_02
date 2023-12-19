/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:22:53 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/19 22:52:05 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	point_side(Point const p, Point const n_1, Point const n_2)
{
	return( (p.x() - n_2.x()) * (n_1.y() - n_2.y()) -  (n_1.x() - n_2.x()) * (p.y() - n_2.y()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool has_neg, has_pos, S1, S2, S3;

	S1 = point_side()
	
	return !();
}

