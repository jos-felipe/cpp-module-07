/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:58:24 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/14 19:02:31 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void	printElement(T &element)
{
	std::cout << element << " ";
}

template<typename T>
void	incrementElement(T &element)
{
	element++;
}

int	main(void)
{
	int			intArray[] = {1, 2, 3, 4, 5};
	const char	charArray[] = {'a', 'b', 'c', 'd', 'e'};
	double		doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "Testing with int array:" << std::endl;
	iter(intArray, 5, printElement);
	std::cout << std::endl;

	std::cout << "Testing with const char array:" << std::endl;
	iter(charArray, 5, printElement);
	std::cout << std::endl;

	std::cout << "Testing with double array:" << std::endl;
	iter(doubleArray, 5, printElement);
	std::cout << std::endl;

	std::cout << "Incrementing and printing int array:" << std::endl;
	iter(intArray, 5, incrementElement);
	iter(intArray, 5, printElement);
	std::cout << std::endl;

	return (0);
}