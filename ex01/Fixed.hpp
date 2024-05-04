/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:49:04 by truello           #+#    #+#             */
/*   Updated: 2024/05/04 13:44:22 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int fract_part = 8;
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed(void);
		Fixed &operator=(const Fixed &ref_fixed);

		int		getRawBits(void) const;
		void	setRawBits(const int p_rawbits);
		int		toInt(void) const;
		float 	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
