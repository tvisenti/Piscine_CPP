/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 08:51:02 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 14:15:20 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <fstream>

class Logger {
	public:
		Logger(std::string file);
		~Logger(void);

		void		log(std::string const & dest, std::string const & message) const;
		std::string	getFilename(void) const;

	private:
		void		_logToConsole(std::string const & message) const;
		void		_logToFile(std::string const & message) const;
		std::string	_makeLogEntry(std::string message) const;

		std::string	_filename;
};

#endif
