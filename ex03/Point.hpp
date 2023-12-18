/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:03 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/18 22:51:40 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

class	Point{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		//Constructors
			Point();
			Point(float x, float y);
			Point(Point &copy);
		//Getter
			float get_x(void);
			float get_y(void);
		//Destructor
			~Point();
		//Operator overloads
			Point	&operator=(Point &copy);
};