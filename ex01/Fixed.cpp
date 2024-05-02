/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:09:51 by truello           #+#    #+#             */
/*   Updated: 2024/05/02 15:22:14 by truello          ###   ########.fr       */
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
	*this = fixed;
}

Fixed::Fixed(int number)
{

}

Fixed::Fixed(float number)
{

}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &ref_fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value  = ref_fixed.getRawBits();
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
