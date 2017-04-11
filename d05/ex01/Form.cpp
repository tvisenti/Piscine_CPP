/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:31:29 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 11:26:24 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException() {
	return;
}

Form::GradeTooHighException::GradeTooHighException(
	const GradeTooHighException& src) {
	*this = src;
	return;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
	return;
}

Form::GradeTooHighException&	Form::GradeTooHighException::operator=(const GradeTooHighException& rhs) {
	(void)rhs;
	return *this;
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {
	return;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException& src) {
	*this = src;
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
	return;
}

Form::GradeTooLowException&	Form::GradeTooLowException::operator=(const GradeTooLowException& rhs) {
	(void)rhs;
	return *this;
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false) {
    return;
}

Form::Form(Form const &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec) {
    *this = src;
    return;
}

Form::~Form(void) {
    return;
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

std::string	Form::getName(void) const {
	return this->_name;
}

int			Form::getGradeSign(void) const {
	return this->_gradeSign;
}

int			Form::getGradeExec(void) const {
	return this->_gradeExec;
}

bool				Form::getSigned(void) const {
	return this->_signed;
}

void				Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <=  this->_gradeSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, const Form& rhs) {
	o << rhs.getName() << ", form grade signed " << rhs.getGradeSign() << ", form grade executed " << rhs.getGradeExec() << ", signed " << rhs.getSigned();
	return o;
}
