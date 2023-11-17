/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:38:40 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 20:33:26 by amaligno         ###   ########.fr       */
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
				Fixed(Fixed &copy);
				Fixed(const int i);
				Fixed(const float f);
				~Fixed();
		//Getter
		int		getRawBits(void) const;
		//Setter
		void	setRawBits(int const raw);
		//
		float	toFloat(void) const;
};

Fixed	&operator=(Fixed &copy);


#endif