/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 10:43:56 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/13 12:08:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define ARRAY_SIZE 4

#include "Array.cpp"

int		main() {
	try
	{
		std::cout << "-----------------------" << std::endl;
		Array<int>	tabInt(ARRAY_SIZE);
		std::cout << "ArrayInt(size): " << tabInt.size() << std::endl;

		tabInt[0] = 21;
		tabInt[1] = 12;
		tabInt[2] = 42;
		tabInt[3] = 24;
		for (int i = 0; i < ARRAY_SIZE; i++) {
			std::cout << "ArrayInt[" << i << "]: " << tabInt[i] << std::endl;
		}

		std::cout << "\n-----------------------" << std::endl;
		Array<std::string>	tabStr(ARRAY_SIZE);
		std::cout << "ArrayStr(size): " << tabStr.size() << std::endl;

		tabStr[0] = "This";
		tabStr[1] = "is";
		tabStr[2] = "a";
		tabStr[3] = "test";
		for (int i = 0; i < ARRAY_SIZE; i++) {
			std::cout << "ArrayStr[" << i << "]: " << tabStr[i] << std::endl;
		}

		std::cout << "\n-----------------------" << std::endl;
		Array<char>		tabBase;
		tabBase[0] = 'c';
		std::cout << "ArrayBase(size): " << tabBase.size() << std::endl;
		std::cout << "ArrayBase[" << 0 << "]: " << tabBase[0] << std::endl;


		std::cout << "\n-----------------------" << std::endl;
		Array<char>		tabError;
		tabError[0] = 'c';
		std::cout << "ArrayError(size): " << tabError.size() << std::endl;
		std::cout << "ArrayError[" << 0 << "]: " << tabError[2] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Try to access to an element ouf of limit, catch with " << e.what() << std::endl;
	}
	return (0);
}
