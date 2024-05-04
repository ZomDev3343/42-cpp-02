/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:46:49 by truello           #+#    #+#             */
/*   Updated: 2024/05/04 13:45:34 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(-10), b(a), c(4.5f);

	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toInt() << std::endl;

	std::cout << a.toFloat() << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << c << std::endl;
	
	return (0);
}
