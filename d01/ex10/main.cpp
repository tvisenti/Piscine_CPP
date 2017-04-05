/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:15:16 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 10:58:08 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int argc, char **argv) {
	while (argc == 1) {
		std::string buff;

		getline(std::cin, buff);
		std::cout << buff << std::endl;
	}
	for (int i = 1; i < argc; i++) {
		std::ifstream		ifs(argv[i]);
		std::string 		str((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
		if (ifs.fail()) {
			std::cout << "cat: " << argv[i] << ": " << strerror(errno) << std::endl;
		} else if (str.length() == 0) {
			std::cout << "Give me a file, not a directory or empty file!" << std::endl;
		} else {
			std::cout << str << std::endl;
		}
		ifs.close();
	}
	return (0);
}
