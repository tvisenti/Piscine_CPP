/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:39:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 16:54:21 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

int main(void) {
    Contact contact[8];
    int nbUser = 0;
    std::string buff;

    std::cout << "This is your phone. Please enter an action: ADD, SEARCH or EXIT." << std::endl;
    std::getline(std::cin, buff);
    while (buff != "EXIT") {
        if (buff == "ADD" && nbUser < 8) {
            contact[nbUser] = Contact::addPhone();
            nbUser++;
            std::cout << "Contact is registered." << std::endl;
        } else if (buff == "ADD" && nbUser == 8) {
            std::cout << "Sorry, your phone cannot support more than 8 contacts ..." << std::endl;
        } else if (buff == "SEARCH" && nbUser > 0) {
            contact->showAllContacts(contact, nbUser);
            std::cout << "The search is completed." << std::endl;
        } else if (buff == "SEARCH" && nbUser == 0) {
            std::cout << "Sorry, you don't have friends ..." << std::endl;
        } else {
            std::cout << "This command is unknown : '" << buff << "'." << std::endl;
        }
        std::cout << "Try to type: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, buff);
    }
    std::cout << "Your phone is destroyed." << std::endl;
    return 0;
}
