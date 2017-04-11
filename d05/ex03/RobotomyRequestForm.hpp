/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:35:01 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 15:39:03 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	std::string		getTarget(void) const;

	void			execute(Bureaucrat const & executor) const;

private:
	RobotomyRequestForm(void);

	std::string	_target;
};

#endif
