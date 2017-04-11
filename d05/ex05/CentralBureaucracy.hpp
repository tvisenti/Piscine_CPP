/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:39:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 21:59:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include <iostream>
# include "OfficeBlock.hpp"
# include "Bureaucrat.hpp"
# include "Intern.hpp"

# define BUREAUCRATE_NUMBER 42
# define TARGET_SIZE 100
# define CENTRAL_SIZE 20

class CentralBureaucracy {

	public:
		CentralBureaucracy(void);
		~CentralBureaucracy(void);
		CentralBureaucracy &operator=(CentralBureaucracy const &);

		void		feedOffice(Bureaucrat*);
		void		queueUp(std::string);
		static int	myRand(int, int);
		OfficeBlock	&getOfficeCentral(int);
		std::string	getTarget(int);
		int			getIndex(void);

	private:
	    CentralBureaucracy(CentralBureaucracy const &src);
		int			_ind;
		OfficeBlock _central[CENTRAL_SIZE];
		std::string _targets[TARGET_SIZE];
};

#endif
