/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:06:45 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/13 18:06:47 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
    // Test with integers
    int a = 2;
    int b = 3;
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Do swap:" << std::endl;
	::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    
    // Test with strings
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << "Do swap:" << std::endl;
	::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    
    return (0);
}