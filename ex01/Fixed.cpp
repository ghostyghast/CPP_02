/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:46:39 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 20:13:04 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
using	std::cout;

int	const	Fixed::_fracBits = 8;

Fixed::Fixed()
{
	cout << "Default constructor called\n";
	_value = 0;
}

Fixed 	&Fixed::operator=(Fixed &copy)
{
	cout << "Copy assignement operator called\n";
	_value = copy.getRawBits();
	return *this;
}

Fixed::Fixed(Fixed &copy)
{
	cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called\n";
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called\n";
	_value = raw;
}