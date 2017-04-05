/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:25:59 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 17:20:05 by tvisenti         ###   ########.fr       */
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
		Fixed(Fixed const & src);

		Fixed&	operator=(Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int		_raw;
		static const int	_bit = 8;
};

#endif
