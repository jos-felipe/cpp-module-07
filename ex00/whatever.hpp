/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:07:17 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/13 18:07:20 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/*
 * Function template swap
 * Swaps the values of two given arguments of the same type
 * @param a Reference to the first value
 * @param b Reference to the second value
 */
template<typename T>
void    swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

/*
 * Function template min
 * Returns the smaller of two values, or the second if they're equal
 * @param a First value to compare
 * @param b Second value to compare
 * @return The smaller value, or b if equal
 */
template<typename T>
T const &min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

/*
 * Function template max
 * Returns the greater of two values, or the second if they're equal
 * @param a First value to compare
 * @param b Second value to compare
 * @return The greater value, or b if equal
 */
template<typename T>
T const &max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

#endif