/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:58:17 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/13 16:26:33 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int		easyfind(T &cont, int i) {
	typename T::iterator occ = find(cont.begin(), cont.end(), i);
	if (occ == cont.end()) {
		throw std::exception();
	}
	return *occ;
}

#endif
