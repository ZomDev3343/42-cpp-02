/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:39:39 by tohma             #+#    #+#             */
/*   Updated: 2024/05/16 15:26:56 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point(void);
		Point(Fixed x, Fixed y);
		Point(const Point& point);
		Point &operator=(const Point &ref_point);
		~Point(void);
		Fixed getX(void) const;
		Fixed getY(void) const;
};
Point operator-(Point to_sub, const Point &point);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
