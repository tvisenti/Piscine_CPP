/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:18:16 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/12 17:30:02 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	printer(T & i) {
	std::cout << i << std::endl;
}

template <typename T>
void	iter(T *arr, size_t length, void(*fn)(T &)) {
	for (size_t i = 0; i < length; i++) {
		fn(arr[i]);
	}
}

int		main() {
	std::cout << "---------------------ARRAY-INT" << std::endl;
	int arrayInt[4] = {1, 2, 3, 4};

	iter<int>(arrayInt, 4, &printer);

	std::cout << "\n---------------------ARRAY-STR" << std::endl;
	std::string arrayStr[4] = {"Je", "suis", "un", "test"};
	iter<std::string>(arrayStr, 4, &printer);
	return (0);
}
