/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:25:59 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 21:34:07 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <fstream>

class Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(Fixed const & src);

		Fixed&	operator=(Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;

		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static const Fixed&	min(Fixed const &nb1, Fixed const &nb2);
		static const Fixed&	max(Fixed const &nb1, Fixed const &nb2);

		Fixed&	min(Fixed &nb1, Fixed &nb2);
		Fixed&	max(Fixed &nb1, Fixed &nb2);

	private:
		int		_myPow(const int n) const;

		int		_raw;
		static const int	_fBit = 8;
};

std::ostream& operator<<(std::ostream &o, Fixed const & rhs);

#endif
