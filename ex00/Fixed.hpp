/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:49:04 by truello           #+#    #+#             */
/*   Updated: 2024/05/02 14:27:22 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
	private:
		int value;
		static const int fract_part = 8;
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		~Fixed(void);
		void operator=(const Fixed &ref_fixed);

		int		getRawBits(void) const;
		void	setRawBits(const int p_rawbits);
};

#endif
