/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:03 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/14 18:11:54 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class	Point{
	private:
		const Fixed	pos_x;
		const Fixed	pos_y;
	public:
		//Constructors
			Point();
			Point(float x, float y);
			Point(const Point &copy);
		//Getter
			Fixed get_x(void) const;
			Fixed get_y(void) const;
			float x(void) const;
			float y(void) const;
		//Destructor
			~Point();
		//Operator overloads
			Point	&operator=(const Point src);
};

#endif