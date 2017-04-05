/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 08:51:02 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 10:02:20 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <fstream>

class Logger {
	private:
		void		logToConsole(std::string const & message);
		void		logToFile(std::string const & message);
		std::string	makeLogEntry(std::string message);

	public:
		Logger(std::string file);
		~Logger(void);
		void		log(std::string const & dest, std::string const & message);

		std::string	_filename;
};

#endif
