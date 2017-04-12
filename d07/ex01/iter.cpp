/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:18:16 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/12 17:51:43 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *arr, size_t length, void(*fn)(T &)) {
	for (size_t i = 0; i < length; i++) {
		fn(arr[i]);
	}
}

template <typename T>
void	printer(T & i) {
	std::cout << i << std::endl;
}

void	incrementInt(int &i) {
	++i;
}

int		main() {
	std::cout << "---------------------TEMP-INT" << std::endl;
	int arrayInt[4] = {1, 2, 3, 4};

	iter<int>(arrayInt, 4, &printer);

	std::cout << "\n---------------------TEMP-STR" << std::endl;
	std::string arrayStr[4] = {"Je", "suis", "un", "test"};
	iter<std::string>(arrayStr, 4, &printer);

	std::cout << "\n---------------------FUNC-INT" << std::endl;
	int arrayIntFct[4] = {1, 2, 3, 4};

	iter<int>(arrayIntFct, 4, &incrementInt);
	for (int i = 0; i < 4; i++) {
		std::cout << arrayIntFct[i] << '\n';
	}
	return (0);
}
