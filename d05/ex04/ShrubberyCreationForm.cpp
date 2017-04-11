/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:33:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 16:13:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137), _target(target) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src) {
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    if (this != &rhs) {
		this->_target = rhs._target;
    }
    return *this;
}

std::string		ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getGradeExec() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		std::ofstream	ofs(this->_target + "_shrubbery");
		ofs << "             * *" << std::endl;
	    ofs << "           *    *  *" << std::endl;
	    ofs << "      *  *    *     *  *" << std::endl;
	    ofs << "     *     *    *  *    *" << std::endl;
	    ofs << " * *   *    *    *    *   *" << std::endl;
	    ofs << " *     *  *    * * .#  *   *" << std::endl;
	    ofs << " *   *     * #.  .# *   *" << std::endl;
	    ofs << "  *     '#.  #: #' * *    *" << std::endl;
	    ofs << " *   * * `#. ##`       *" << std::endl;
	    ofs << "   *       `###" << std::endl;
	    ofs << "             `##" << std::endl;
	    ofs << "              ##." << std::endl;
	    ofs << "              .##:" << std::endl;
	    ofs << "              :###" << std::endl;
	    ofs << "              :###" << std::endl;
	    ofs << "             ####." << std::endl;
	    ofs << "WWWWWWWWWWW.######.WWWWWWWWWW" << std::endl;
		ofs.close();
	}
}
