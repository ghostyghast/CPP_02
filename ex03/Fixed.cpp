/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:46:39 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/14 18:08:01 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// using	std::cout;

int	const	Fixed::_fracBits = 8;

Fixed::Fixed()
{
	// cout << "Default constructor called\n";
	_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	// cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed(const int i)
{
	// cout << "Int constructor called\n";
	_value = i << _fracBits;
}

Fixed::Fixed(const float f)
{
	// cout << "Float constructor called\n";
	// print_bits(f);
	_value = roundf(f * (1 << _fracBits));
	std::cout << "fixed constructor, _value: " << _value << '\n';
	// print_bits(_value);
}

Fixed::~Fixed(void)
{
	// cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	// cout << "getRawBits member function called\n";
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	// cout << "setRawBits member function called\n";
	_value = raw;
}

int		Fixed::toInt(void) const
{
	return (_value >> _fracBits);
}

float	Fixed::toFloat(void) const
{
	return (_value / float(1 << _fracBits));
}

Fixed 	&Fixed::operator=(const Fixed copy)
{
	// cout << "Copy assignement operator called\n";
	_value = copy.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &num)
{
	stream << num.toFloat();
	return (stream);
}

bool	Fixed::operator<(const Fixed &num)
{
	return (this->toFloat() < num.toFloat());
}

bool	Fixed::operator>(const Fixed &num)
{
	return (this->toFloat() > num.toFloat());
}

bool	Fixed::operator==(const Fixed &num)
{
	return (this->toFloat() == num.toFloat());
}

bool	Fixed::operator!=(const Fixed &num)
{
	return (this->toFloat() != num.toFloat());
}

bool	Fixed::operator>=(const Fixed &num)
{
	return (this->toFloat() >= num.toFloat());
}

bool	Fixed::operator<=(const Fixed &num)
{
	return (this->toFloat() <= num.toFloat());
}

float	Fixed::operator*(const Fixed &num)
{
	return (this->toFloat() * num.toFloat());
}

float	Fixed::operator+(const Fixed &num)
{
	return (this->toFloat() + num.toFloat());
}

float	Fixed::operator-(const Fixed &num)
{
	return (this->toFloat() - num.toFloat());
}

float	Fixed::operator/(const Fixed &num)
{
	return (this->toFloat() / num.toFloat());
}

//Postfix
Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_value++;	
	return(temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_value--;	
	return(temp);
}

//Prefix
Fixed	Fixed::operator++()
{
	_value++;
	return(*this);
}

Fixed	Fixed::operator--()
{
	_value++;
	return(*this);
}

const Fixed	&Fixed::min(const Fixed &num_1, const Fixed &num_2)
{
	if (num_1.toFloat() >= num_2.toFloat())
		return (num_2);
	return (num_1);
}

const Fixed	&Fixed::max(const Fixed &num_1, const Fixed &num_2)
{
	if (num_1.toFloat() <= num_2.toFloat())
		return (num_2);
	return (num_1);
}

Fixed	&Fixed::max(Fixed &num_1, Fixed &num_2)
{
	if (num_1 <= num_2)
		return (num_2);
	return (num_1);
}

Fixed	&Fixed::min(Fixed &num_1, Fixed &num_2)
{
	if (num_1 >= num_2)
		return (num_2);
	return (num_1);
}

// void	print_bits(int num)
// {
// 	for (int i = 31; i >= 0; i--)
	// 	cout << (1 & (num >> i));
	// cout << '\n';
// }
