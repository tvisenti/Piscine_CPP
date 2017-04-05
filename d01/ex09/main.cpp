/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 08:51:14 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 10:11:32 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main() {
	Logger logger("log.txt");

	logger.log("logToConsole", "This is a complete message for console");
	logger.log("logToFile", "This is a complete message for file");
	return (0);
}
