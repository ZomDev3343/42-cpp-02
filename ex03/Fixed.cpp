/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:09:51 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 15:34:37 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
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
}

Fixed &Fixed::operator=(const Fixed &ref_fixed)
{
	this->value = ref_fixed.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	this->operator++();
	return (old);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	this->operator--();
	return (old);
}
int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(const int p_rawBits)
{
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

bool operator<(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() < b.toFloat());
}

bool operator>(const Fixed &a, const Fixed &b)
{
	return (b < a);
}

bool operator<=(const Fixed &a, const Fixed &b)
{
	return (!(a > b));
}

bool operator>=(const Fixed &a, const Fixed &b)
{
	return (!(a < b));
}

bool operator==(const Fixed &a, const Fixed &b)
{
	return (!(a < b) && !(a > b));
}

bool operator!=(const Fixed &a, const Fixed &b)
{
	return (!(a == b));
}

Fixed operator+(Fixed fixed, const Fixed &to_add)
{
	return (Fixed(fixed.toFloat() + to_add.toFloat()));
}

Fixed operator-(Fixed fixed, const Fixed &to_sub)
{
	return (Fixed(fixed.toFloat() - to_sub.toFloat()));
}

Fixed operator/(Fixed fixed, const Fixed &to_div)
{
	return (Fixed(fixed.toFloat() / to_div.toFloat()));
}

Fixed operator*(Fixed fixed, const Fixed &to_mul)
{
	return (Fixed(fixed.toFloat() * to_mul.toFloat()));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a < b ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a < b ? b : a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}


