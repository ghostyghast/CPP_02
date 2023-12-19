/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:03 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/19 22:42:34 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

class	Point{
	private:
		const Fixed	pos_x;
		const Fixed	pos_y;
	public:
		//Constructors
			Point();
			Point(float x, float y);
			Point(Point &copy);
		//Getter
			float x(void) const;
			
			float y(void) const;
		//Destructor
			~Point();
		//Operator overloads
			Point	&operator=(Point &copy);
};