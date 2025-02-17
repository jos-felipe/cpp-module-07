/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:52:02 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/17 12:52:05 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
    /* Test default constructor */
    std::cout << "\n=== Testing default constructor ===\n";
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    /* Test parametric constructor */
    std::cout << "\n=== Testing parametric constructor ===\n";
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    /* Initialize arrays with random values */
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    /* Test copy constructor and assignment operator */
    std::cout << "\n=== Testing copy constructor and assignment operator ===\n";
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    /* Verify values are preserved */
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Values don't match!" << std::endl;
            return 1;
        }
    }
    std::cout << "All values match!" << std::endl;

    /* Test exception handling */
    std::cout << "\n=== Testing exception handling ===\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }

    /* Test with different types */
    std::cout << "\n=== Testing with string type ===\n";
    Array<std::string> strings(3);
    strings[0] = "Hello";
    strings[1] = "42";
    strings[2] = "School";

    for (unsigned int i = 0; i < strings.size(); i++)
        std::cout << strings[i] << " ";
    std::cout << std::endl;

    delete [] mirror;
    return 0;
}