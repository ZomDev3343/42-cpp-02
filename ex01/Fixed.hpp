/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:49:04 by truello           #+#    #+#             */
/*   Updated: 2024/05/02 14:51:51 by truello          ###   ########.fr       */
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
		Fixed(int number);
		Fixed(float number);
		~Fixed(void);
		void operator=(const Fixed &ref_fixed);

		int		getRawBits(void) const;
		void	setRawBits(const int p_rawbits);
};

#endif
