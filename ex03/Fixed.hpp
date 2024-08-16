/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:38:40 by amaligno          #+#    #+#             */
/*   Updated: 2024/08/16 12:00:54 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed{
	private:
		int	_value;
		static const int	_fracBits;

	public:
				Fixed();
				Fixed(const Fixed &copy);
				Fixed(const int i);
				Fixed(const float f);
				~Fixed();
		//Getter
		int		getRawBits(void) const;
		//Setter
		void	setRawBits(int const raw);
		//methods
		float	toFloat(void) const;
		int		toInt(void) const;
		//Static methods
		static const Fixed	&min(const Fixed &num_1, const Fixed &num_2);
		static const Fixed	&max(const Fixed &num_1, const Fixed &num_2);
		static Fixed		&min(Fixed &num_1, Fixed &num_2);
		static Fixed		&max(Fixed &num_1, Fixed &num_2);
	//operator overloads
			Fixed	&operator=(const Fixed num);
		//Conditional
			bool	operator<(const Fixed &num);
			bool	operator>(const Fixed &num);
			bool	operator==(const Fixed &num);
			bool	operator!=(const Fixed &num);
			bool	operator>=(const Fixed &num);
			bool	operator<=(const Fixed &num);
		//Arithmetic
			float	operator*(const Fixed &num);
			float	operator+(const Fixed &num);
			float	operator-(const Fixed &num);
			float	operator/(const Fixed &num);
		//Increment / decrement
			//postfix
			Fixed	operator++(int);
			Fixed	operator--(int);
			//prefix
			Fixed	operator++();
			Fixed	operator--();
};

// void	print_bits(int num);
std::ostream &operator<<(std::ostream &stream, const Fixed &num);


#endif