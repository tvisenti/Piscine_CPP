/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 08:50:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 14:16:44 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string file) : _filename(file) {
	std::cout << "Logger constructed" << std::endl;
	return;
}

Logger::~Logger(void) {
	std::cout << "Logger destructed" << std::endl;
	return;
}

std::string	Logger::getFilename(void) const {
	return (this->_filename);
}

void		Logger::_logToConsole(std::string const & message) const {
	std::cout << "Logger::logToConsole" << std::endl;
	std::cout << message << std::endl;
	return;
}

void		Logger::_logToFile(std::string const & message) const {
	std::cout << "Logger::logToFile" << std::endl;
	std::ofstream		ofs(this->getFilename());
	ofs << message << std::endl;
	ofs.close();
	return;
}

std::string	Logger::_makeLogEntry(std::string message) const {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [32];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer, 32, "[%Y-%m-%d %H:%M:%S] ", timeinfo);
	std::string tmp = buffer + message;
	return tmp;
}

void		Logger::log(std::string const & dest, std::string const & message) const{
	void	(Logger::*array[2])(std::string const & message) const = {&Logger::_logToConsole, &Logger::_logToFile};
	std::string	cmp[2] = {"logToConsole", "logToFile"};

	std::string	messageLog = this->_makeLogEntry(message);

	for (int i = 0; i < 2; i++) {
		if (cmp[i] == dest) {
			(this->*array[i])(messageLog);
			return;
		}
	}
	std::cout << "Error ! I can't find the func: " << dest << std::endl;
	return;
}
