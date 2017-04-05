/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:25:56 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 23:16:39 by Transmetropolitan###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _raw(0) {
	return;
}

Fixed::~Fixed(void) {
	return;
}

Fixed::Fixed(const int nb) {
	this->_raw = (nb << Fixed::_fBit);
	return;
}

Fixed::Fixed(const float nb) {
	this->_raw = (int)roundf(nb * Fixed::_myPow(Fixed::_fBit));
	return;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	return;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	this->_raw = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

float	Fixed::toFloat(void) const {
	float tmp = roundf(this->_raw) / Fixed::_myPow(Fixed::_fBit);

	return tmp;
}

int		Fixed::toInt(void) const {
	return this->_raw >> Fixed::_fBit;
}

std::ostream& operator<<(std::ostream &o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

int		Fixed::_myPow(const int n) const {
	int	ret = 2;
	for (int i = 1; i < n; i++) {
		ret *= 2;
	}
	return ret;
}

bool	Fixed::operator>(Fixed const& rhs) {
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(Fixed const& rhs) {
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const& rhs) {
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const& rhs) {
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const& rhs) {
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const& rhs) {
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::Fixed::operator+(Fixed const& rhs) {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::Fixed::operator-(Fixed const& rhs) {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::Fixed::operator*(Fixed const& rhs) {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::Fixed::operator/(Fixed const& rhs) {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::Fixed::operator++() {
	++(this->_raw);
	return (*this);
}

Fixed&	Fixed::Fixed::operator--() {
	--(this->_raw);
	return (*this);
}

Fixed	Fixed::Fixed::operator++(int) {
	Fixed tmp = *this;

	++(*this);
	return (tmp);
}

Fixed	Fixed::Fixed::operator--(int) {
	Fixed tmp = *this;

	--(*this);
	return (tmp);
}

const Fixed&	Fixed::min(Fixed const &nb1, Fixed const &nb2) {
	if (nb1.toFloat() < nb2.toFloat())
		return (nb1);
	return (nb2);
}

const Fixed&	Fixed::max(Fixed const &nb1, Fixed const &nb2) {
	if (nb1.toFloat() > nb2.toFloat())
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::min(Fixed &nb1, Fixed &nb2) {
	if (nb1.toFloat() < nb2.toFloat())
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::max(Fixed &nb1, Fixed &nb2) {
	if (nb1.toFloat() > nb2.toFloat())
		return (nb1);
	return (nb2);
}
