/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:25:59 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 21:03:49 by tvisenti         ###   ########.fr       */
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

	private:
		int		_myPow(const int n) const;

		int		_raw;
		static const int	_fBit = 8;
};

std::ostream& operator<<(std::ostream &o, Fixed const & rhs);

#endif
