/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 10:28:24 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/13 12:00:53 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
	this->_array = new T;
	this->_size = 1;
    return;
}

template <typename T>
Array<T>::Array(unsigned int size) {
	this->_array = new T[size];
	this->_size = size;
    return;
}

template <typename T>
Array<T>::Array(Array<T> const &src) {
    *this = src;
    return this;
}

template <typename T>
Array<T>::~Array(void) {
	if (this->_array != NULL)
		delete [] this->_array;
    return;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs) {
    if (this != &rhs) {
		this->_size = rhs._size;
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = rhs._array[i];
		}
    }
    return *this;
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->_size)
		throw std::exception();
	return this->_array[i];
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return this->_size;
}
