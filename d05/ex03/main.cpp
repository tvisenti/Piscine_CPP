/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 23:10:50 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	srand(time(NULL));
	std::cout << std::endl << "--- Tests ex00" << std::endl;
	try {
		Bureaucrat bureaucrat("Roger", 3);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Roger", 3);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Roger", 148);
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Roger", 155);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Roger", 0);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Tests ex01" << std::endl;
	try {
		Bureaucrat  homer("Homer", 4);
		std::cout << homer << std::endl;
		PresidentialPardonForm        form1("form1");
		std::cout << form1 << std::endl;
		homer.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat  homer("John", 7);
		std::cout << homer << std::endl;
		PresidentialPardonForm        form1("form1");
		std::cout << form1 << std::endl;
		homer.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Tests ex02 modified for the 03" << std::endl;
	try {
		Intern intern;
		Bureaucrat  homer("Homer", 4);
		std::cout << homer << std::endl;
		Form*		form1 = intern.makeForm("PresidentialPardon","Omar");
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
		homer.signForm(*form1);
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat  homer("John", 7);
		std::cout << homer << std::endl;
		Form*        form1 = intern.makeForm("PresidentialPardon","Omar");
		std::cout << *form1 << std::endl;
		homer.signForm(*form1);
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
		std::cout << *form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat  homer("Homer", 30);
		std::cout << homer << std::endl;
		Form*        form1 = intern.makeForm("RobotomyRequest","Goldorack");
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
		homer.signForm(*form1);
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat  homer("John", 70);
		std::cout << homer << std::endl;
		Form*        form1 = intern.makeForm("RobotomyRequest","Goldorack");
		std::cout << *form1 << std::endl;
		homer.signForm(*form1);
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
		std::cout << *form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat  homer("John", 70);
		std::cout << homer << std::endl;
		Form*        form1 = intern.makeForm("ShrubberyCreation","treeeeeee");
		std::cout << *form1 << std::endl;
		homer.signForm(*form1);
		std::cout << *form1 << std::endl;
		homer.executeForm(*form1);
		std::cout << *form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
