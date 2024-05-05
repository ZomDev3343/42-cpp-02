/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:49:04 by truello           #+#    #+#             */
/*   Updated: 2024/05/05 22:31:44 by tohma            ###   ########.fr       */
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
		Fixed(const Fixed &fixed);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int p_rawbits);
		int		toInt(void) const;
		float 	toFloat(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		const static Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);
		
		Fixed &operator=(const Fixed &ref_fixed);
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

bool operator<(const Fixed &a, const Fixed &b);
bool operator>(const Fixed &a, const Fixed &b);
bool operator<=(const Fixed &a, const Fixed &b);
bool operator>=(const Fixed &a, const Fixed &b);
bool operator==(const Fixed &a, const Fixed &b);
bool operator!=(const Fixed &a, const Fixed &b);

Fixed operator+(Fixed to_add, const Fixed &fixed);
Fixed operator-(Fixed to_sub, const Fixed &fixed);
Fixed operator/(Fixed to_div, const Fixed &fixed);
Fixed operator*(Fixed to_mul, const Fixed &fixed);


#endif
