/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:57:19 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/18 17:40:38 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
using std::cout;
using std::endl;

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
cout << "a is " << a << endl;
cout << "b is " << b << endl;
cout << "c is " << c << endl;
cout << "d is " << d << endl;
cout << "a is " << a.toInt() << " as integer" << endl;
cout << "b is " << b.toInt() << " as integer" << endl;
cout << "c is " << c.toInt() << " as integer" << endl;
cout << "d is " << d.toInt() << " as integer" << endl;
return 0;
}