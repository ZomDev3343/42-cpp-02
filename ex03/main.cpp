/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:46:49 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 15:39:05 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(1.0f, 1.0f);
	Point point(2.0f, 1.0f);
	Point point2(0.5f, 0.35f);

	std::cout << "point dans ABC : " << bsp(a, b, c, point) << std::endl;
	std::cout << "point2 dans ABC : " << bsp(a, b, c, point2) << std::endl;

	return (0);
}
