/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:57:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/13 11:41:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {

public:
	Array(void);
	Array(unsigned int);
	~Array(void);
    Array(Array<T> const &src);

	Array	&operator=(Array<T> const &rhs);
	T		&operator[](unsigned int);

	unsigned int	size(void) const;

private:
	unsigned int	_size;
	T 				*_array;
};

#endif
