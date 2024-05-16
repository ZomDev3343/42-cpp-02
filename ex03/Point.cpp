/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:43:19 by tohma             #+#    #+#             */
/*   Updated: 2024/05/16 15:06:46 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	this->x = Fixed(0);
	this->y = Fixed(0);
}

Point::Point(float x, float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &point)
{
	this->x = point.x;
	this->y = point.y;
}

Point &Point::operator=(const Point &ref_point)
{
	*this = Point(ref_point);
	return (*this);
}

Point::~Point(void)
{

}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Point operator-(Point point, const Point &to_sub)
{
	return (Point(point.getX().toFloat() - to_sub.getX().toFloat(),
		point.getY().toFloat() - to_sub.getY().toFloat()));
}
