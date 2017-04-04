/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 08:45:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 13:22:29 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

bool checkFile(char** argv) {
	struct stat s;
	if(stat(argv[1],&s) == 0) {
		if (s.st_mode & S_IFDIR) {
			std::cout << "Give me a file, not a directory!" << std::endl;
			return false;
		} else if (s.st_mode & S_IFREG) {
			return true;
		}
	}
	std::cout << "Give me a true file!" << std::endl;
	return false;
}

std::string	getStringPath(std::string fullPath) {
	char sep = '/';
	size_t i = fullPath.rfind(sep, fullPath.length());
    if (i != std::string::npos) {
       return (fullPath.substr(i + 1, fullPath.length() - i));
    }
    return (fullPath);
}

void findAndReplace(std::string fullPath, std::string s1, std::string s2, std::string path) {
	std::ifstream		ifs(fullPath);
	std::ofstream		ofs(path + ".replace");
	std::string 		str((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
	size_t				pos = 0;
	int					nbOc = 0;

	if (!ifs.is_open()) {
		std::cout << "Give me a file, not a directory!" << std::endl;
	}
	ifs.close();
	while ((pos = str.find(s1)) != std::string::npos) {
		str.replace(pos, s1.length(), s2);
		nbOc++;
	}
	if (nbOc == 0)
		std::cout << "No occurence in this file." << std::endl;
	else
		std::cout << "I find " << nbOc << " occurences in this file." << std::endl;
	ofs << str;
	return;
}

int main(int argc, char** argv) {
	if (argc == 4) {
		// if (checkFile(argv)) {
			std::string path = getStringPath(argv[1]);
			std::cout << "Path of file: " << path << std::endl;
			findAndReplace(argv[1], argv[2], argv[3], path);
		// }
	} else {
		std::cout << "Give me a file and two strings!" << std::endl;
	}
	return (0);
}
