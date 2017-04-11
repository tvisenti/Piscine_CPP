/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 08:36:01 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "-----------------------------------\n" << std::endl;

	Bureaucrat	newBur1("Joe", 5);
	try {
		for (int i = 0; i < 20; i++) {
			newBur1.incrementGrade();
			std::cout << newBur1 << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << newBur1 << std::endl;

std::cout << "\n-----------------------------------\n" << std::endl;

	Bureaucrat	newBur2("Jack", 145);
	try {
		for (int i = 0; i < 20; i++) {
			newBur2.decrementGrade();
			std::cout << newBur2 << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << newBur2 << std::endl;

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Bureaucrat	newBur3("John", 160);
		for (int i = 0; i < 20; i++) {
			newBur3.decrementGrade();
			std::cout << newBur3 << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Bureaucrat	newBur4("Jim", -5);
		for (int i = 0; i < 20; i++) {
			newBur4.decrementGrade();
			std::cout << newBur4 << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	return 0;
}
