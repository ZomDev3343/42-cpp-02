/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:09:51 by truello           #+#    #+#             */
/*   Updated: 2024/05/04 13:45:05 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.value;
}

Fixed::Fixed(const int number)
{
	this->value = (number >> 31 << 31 ) | (number << Fixed::fract_part);
}

Fixed::Fixed(const float number)
{
	this->value = (int) std::roundf(number * (1 << Fixed::fract_part));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref_fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = ref_fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int p_rawBits)
{
	std::cout << "setRawBits function called" << std::endl;
	this->value = p_rawBits;
}

int	Fixed::toInt(void) const
{
	return (this->value << 1 >> Fixed::fract_part + 1 | (this->value >> 31 << 31));	
}

float Fixed::toFloat(void) const
{
	return ((float) this->value / (1 << Fixed::fract_part));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
