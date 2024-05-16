/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:47:34 by tohma             #+#    #+#             */
/*   Updated: 2024/05/16 15:38:28 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Point db, dc, dp;
	Fixed d, wa, wb, wc;

	db = b - a;
	dc = c - a;
	dp = point - a;
	d = db.getX() * dc.getY() - dc.getX() * db.getY();

	wa = (point.getX() * (db.getY() - dc.getY())
		+ point.getY() * (dc.getX() - db.getX())
		+ (db.getX() * dc.getY()) - (dc.getX() * db.getY())) / d;
	wb = (point.getX() * dc.getY() - point.getY() * dc.getX()) / d;
	wc = (point.getY() * db.getX() - point.getX() * db.getY()) / d;
	if ((wa.toFloat() >= 0.0f && wa.toFloat() <= 1.0f)
		&& (wb.toFloat() >= 0.0f && wb.toFloat() <= 1.0f)
		&& (wc.toFloat() >= 0.0f && wc.toFloat() <= 1.0f))
		return (true);
	return (false);
}
