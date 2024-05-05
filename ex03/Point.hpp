/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:39:39 by tohma             #+#    #+#             */
/*   Updated: 2024/05/05 22:58:54 by tohma            ###   ########.fr       */
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
		Point(float x, float y);
		Point(const Point& point);
		Point &operator=(const Point &ref_point);
		~Point(void);
		Fixed getX(void) const;
		Fixed getY(void) const;
};
Point operator-(Point to_sub, const Point &point);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif