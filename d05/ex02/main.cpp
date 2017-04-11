/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 16:18:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

   std::cout << "*** TEST FORM ***" << std::endl;
   RobotomyRequestForm		robot("the love");
   ShrubberyCreationForm	tree("mars");
   PresidentialPardonForm	pardon("justin");

   Bureaucrat	Marine("Marine", 46);
   std::cout << Marine;
   std::cout << pardon;
   Marine.signForm(pardon);
   std::cout << pardon;
   std::cout << robot;
   Marine.executeForm(robot);
   Marine.signForm(robot);
   Marine.executeForm(robot);
   std::cout << robot;
   std::cout << tree;
   Marine.executeForm(tree);
   Marine.signForm(tree);
   std::cout << tree;
   Marine.executeForm(tree);
   std::cout << robot;

   return(0);
}
