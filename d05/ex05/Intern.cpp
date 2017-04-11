/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:21:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 19:23:25 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
    return;
}

Intern::Intern(Intern const &src) {
    *this = src;
    return;
}

Intern::~Intern(void) {
    return;
}

Intern &Intern::operator=(Intern const &rhs) {
	(void)rhs;
    return *this;
}

Form*	Intern::makeForm(std::string name, std::string target) {
	Form *form = NULL;

	if (name == "PresidentialPardon") {
		form = new PresidentialPardonForm(target);
	} else if (name == "RobotomyRequest") {
		form = new RobotomyRequestForm(target);
	} else if (name == "ShrubberyCreation") {
		form = new ShrubberyCreationForm(target);
	} else {
		std::cout << "Intern can't create the form " << name << " ";
		throw std::exception();
	}
	std::cout << "Intern creates " << name << std::endl;
	return form;
}
