/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:21:03 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/12 16:06:10 by tvisenti         ###   ########.fr       */
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
S	max(S const & x, S const & y) {
	return ((x>y) ? x : y);
}

template <typename S>
S	min(S const & x, S const & y) {
	return ((x<y) ? x : y);
}

int		main() {
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

	return (0);
}
