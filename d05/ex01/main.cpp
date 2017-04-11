/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 11:04:52 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    std::cout << std::endl << "--- Tests ex00" << std::endl;
    try {
        Bureaucrat bureaucrat("Jean", 3);
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
        Bureaucrat bureaucrat("Joe", 3);
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
        Bureaucrat bureaucrat("John", 148);
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
        Bureaucrat bureaucrat("Jack", 155);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Jim", 0);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--- Tests ex01" << std::endl;
    try {
        Bureaucrat  homer("Joey", 4);
        std::cout << homer << std::endl;
        Form        form1("form1", 5, 4);
        std::cout << form1 << std::endl;
        homer.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat  homer("Jesus", 7);
        std::cout << homer << std::endl;
        Form        form2("form2", 5, 4);
        std::cout << form2 << std::endl;
        homer.signForm(form2);
        std::cout << form2 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
