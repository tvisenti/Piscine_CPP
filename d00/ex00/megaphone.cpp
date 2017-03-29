/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 11:48:18 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/29 14:34:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv) {

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		int i = 0;
		while (++i < argc) {
			int cur = -1;
			while (argv[i][++cur]) {
				std::cout << (char)toupper(argv[i][cur]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
