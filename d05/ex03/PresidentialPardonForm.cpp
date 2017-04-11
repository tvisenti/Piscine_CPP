/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:35:31 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 16:14:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5), _target(target) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src) {
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    if (this != &rhs) {
		this->_target = rhs._target;
    }
    return *this;
}

std::string		PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	return;
}
