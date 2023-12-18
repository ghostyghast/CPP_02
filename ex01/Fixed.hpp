/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:38:40 by amaligno          #+#    #+#             */
/*   Updated: 2023/12/18 17:15:05 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
		//operator overloads
		Fixed	&operator=(const Fixed &copy);
};

void	print_bits(int num);
std::ostream &operator<<(std::ostream &stream, const Fixed &num);


#endif