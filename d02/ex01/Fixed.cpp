/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:25:56 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 20:25:48 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_raw = (nb << Fixed::_fBit);
	return;
}

Fixed::Fixed(const float nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_raw = (int)roundf(nb * 256);
	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

float	Fixed::toFloat(void) const {
	float tmp = roundf(this->_raw) / 256;

	return tmp;
}

int		Fixed::toInt(void) const {
	return this->_raw >> Fixed::_fBit;
}

std::ostream& operator<<(std::ostream &o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
