/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:21:03 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/12 16:15:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename S>
void	swap(S & a, S & b) {
	S c;
	c = a;
	a = b;
	b = c;
}

template <typename S>
S	min(S const & x, S const & y) {
	return ((x<y) ? x : y);
}

template <typename S>
S	max(S const & x, S const & y) {
	return ((x>y) ? x : y);
}

int		main() {
	{
		std::cout << "----------------------------MAIN" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << "\n-------------------------MY-MAIN" << std::endl;
		int a = 21;
		int b = 42;

		std::cout << "----------------------------SWAP" << std::endl;
		std::cout << "Int a: " << a << ", int b: " << b << std::endl;
		swap<int>(a, b);
		std::cout << "a: " << a << ", b: " << b << std::endl;

		std::cout << "\n-----------------------------MIN" << std::endl;
		std::cout << "Int a: " << a << ", int b: " << b << std::endl;
		std::cout << "Min: " << min<int>(a, b) << std::endl;

		std::cout << "\n-----------------------------MAX" << std::endl;
		std::cout << "Int a: " << a << ", int b: " << b << std::endl;
		std::cout << "Max: " << max<int>(a, b) << std::endl;
	}
	return (0);
}
