/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:43:19 by tohma             #+#    #+#             */
/*   Updated: 2024/05/05 22:59:21 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	
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

Point operator-(Point to_sub, const Point &point)
{
	return (Point(point.getX().toFloat() - to_sub.getX().toFloat(),
		point.getY().toFloat() - to_sub.getY().toFloat()));
}