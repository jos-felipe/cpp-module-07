/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:14:10 by josfelip          #+#    #+#             */
/*   Updated: 2025/02/17 11:37:23 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cstdlib>

template<typename T>
class Array
{
private:
    T*              _elements;
    unsigned int    _size;

public:
    Array(void);
    Array(unsigned int n);
    Array(Array const &src);
    ~Array(void);

    Array           &operator=(Array const &rhs);
    T               &operator[](unsigned int index); // read and write version
    T const         &operator[](unsigned int index) const; // read-only version

    unsigned int    size(void) const;

    class OutOfBoundsException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Array index out of bounds";
        }
    };
};

template<typename T>
Array<T>::Array(void) : _elements(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    _elements = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &src) : _elements(NULL), _size(0)
{
    *this = src;
}

template<typename T>
Array<T>::~Array(void)
{
    delete[] _elements;
}

template<typename T>
Array<T>    &Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        delete[] _elements;
        _size = rhs._size;
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = rhs._elements[i];
    }
    return *this;
}

template<typename T>
T   &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw OutOfBoundsException();
    return _elements[index];
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw OutOfBoundsException();
    return _elements[index];
}

template<typename T>
unsigned int    Array<T>::size(void) const
{
    return _size;
}

#endif
