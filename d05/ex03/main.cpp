/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 17:26:55 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

   std::cout << "*** TEST FORM ***" << std::endl;
   Intern someRandomIntern;
   Form* rrf;
   rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");

   return(0);
}
