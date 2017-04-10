#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(
	const GradeTooHighException& src) {
	*this = src;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	return;
}

Bureaucrat::GradeTooHighException&	Bureaucrat::GradeTooHighException::operator=(
	const GradeTooHighException& rhs) {
	(void)rhs;
	return *this;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade is too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(
	const GradeTooLowException& src) {
	*this = src;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	return;
}

Bureaucrat::GradeTooLowException&	Bureaucrat::GradeTooLowException::operator=(
	const GradeTooLowException& rhs) {
	(void)rhs;
	return *this;
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Grade is too low");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat() {
	return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade <= 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade >= 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade++;
	}
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
