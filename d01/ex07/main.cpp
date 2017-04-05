/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 08:45:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 15:24:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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
	std::string 		str((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
	size_t				pos = 0;
	int					nbOc = 0;
	std::string	pathMaj;

	for (size_t i = 0; i < path.length(); i++) {
		pathMaj += (char)toupper(path[i]);
	}
	if (ifs.fail() || str.length() == 0) {
		ifs.close();
		std::cout << "Give me a file, not a directory or empty file!" << std::endl;
		return;
	}
	std::ofstream		ofs(pathMaj + ".replace");
	ifs.close();
	while ((pos = str.find(s1, pos)) != std::string::npos) {
		str.replace(pos, s1.length(), s2);
		pos += s2.length();
		nbOc++;
	}
	if (nbOc == 0)
		std::cout << "No occurence in this file." << std::endl;
	else
		std::cout << "I find " << nbOc << " occurences in this file." << std::endl;
	ofs << str;
	ofs.close();
	return;
}

int main(int argc, char** argv) {
	if (argc == 4) {
		std::string path = getStringPath(argv[1]);
		std::cout << "Path of file: " << path << std::endl;
		findAndReplace(argv[1], argv[2], argv[3], path);
	} else {
		std::cout << "Give me a file and two strings!" << std::endl;
	}
	return (0);
}
