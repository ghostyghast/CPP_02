/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:58:58 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/26 13:53:32 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
using std::cout;

bool bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	Point a(0, 2);
	Point b(2, 0);
	Point c;
	Point P(0.5, 0.5);

    if (bsp(a, b, c, P))
        std::cout << "Point is in triangle!\n";
    else
        std::cout << "Point not in triangle :(\n";
}