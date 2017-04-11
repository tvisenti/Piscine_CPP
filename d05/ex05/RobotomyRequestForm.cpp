/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:34:48 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 16:14:05 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45), _target(target) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) {
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) {
		this->_target = rhs._target;
    }
    return *this;
}

std::string		RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << '\a' << '\a';
		if (rand() % 2)
			std::cout << getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << getTarget() << " hasn't been robotomized. It's a fail guy ..." << std::endl;
	}
}
