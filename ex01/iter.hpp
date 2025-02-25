/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:15:43 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/14 18:57:33 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template<typename T>
void	iter(T *array, size_t length, void (*f)(T &))
{
	if (!array || !f)
		return ;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template<typename T>
void	iter(const T *array, size_t length, void (*f)(const T &))
{
	if (!array || !f)
		return ;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif