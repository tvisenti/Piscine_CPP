/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:39:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/30 18:18:01 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

Contact addPhone(void) {
    Contact contact;

    std::cout << "First name: ";
    std::getline(std::cin, contact.firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, contact.lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, contact.nickname);
    std::cout << "Login: ";
    std::getline(std::cin, contact.login);
    std::cout << "Postal address: ";
    std::getline(std::cin, contact.postalAddress);
    std::cout << "Email address: ";
    std::getline(std::cin, contact.emailAddress);
    std::cout << "Phone number: ";
    std::getline(std::cin, contact.phoneNumber);
    std::cout << "Birthday date: ";
    std::getline(std::cin, contact.birthdayDate);
    std::cout << "Favorite meal: ";
    std::getline(std::cin, contact.favoriteMeal);
    std::cout << "Underwear color: ";
    std::getline(std::cin, contact.underwearColor);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, contact.darkestSecret);
    return (contact);
}

void showContactAtIndex(Contact *contact, int nbMax) {
    while (1) {
        std::cout << "Please select an index" << std::endl;
        std::string index;
        std::getline(std::cin, index);
        if (index.length() == 1) {
            int i = stoi(index);
            if (i <= nbMax && i > 0) {
                i--;
                std::cout << "First name: " << contact[i].firstName << std::endl;
                std::cout << "Last name: " << contact[i].lastName << std::endl;
                std::cout << "Nickname: " << contact[i].nickname << std::endl;
                std::cout << "Login: " << contact[i].login << std::endl;
                std::cout << "Postal address: " << contact[i].postalAddress << std::endl;
                std::cout << "Email address: " << contact[i].emailAddress << std::endl;
                std::cout << "Phone number: " << contact[i].phoneNumber << std::endl;
                std::cout << "Birthday date: " << contact[i].birthdayDate << std::endl;
                std::cout << "Favorite meal: " << contact[i].favoriteMeal << std::endl;
                std::cout << "Underwear color: " << contact[i].underwearColor << std::endl;
                std::cout << "Darkest secret: " << contact[i].darkestSecret << std::endl;
                return;
            }
        }
        std::cout << "I'm not sure to understand ..." << std::endl;
    }
    return;
}

void showAllContacts(Contact *contact, int nbMax) {
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    int cur = 0;
    while (cur < nbMax) {
        std::string firstName = contact[cur].firstName;
        if (firstName.size() >= 9) {
            firstName.resize(10);
            firstName[9] = '.';
        }
        std::string lastName = contact[cur].lastName;
        if (lastName.size() >= 9) {
            lastName.resize(10);
            lastName[9] = '.';
        }
        std::string nickname = contact[cur].nickname;
        if (nickname.size() >= 9) {
            nickname.resize(10);
            nickname[9] = '.';
        }
        std::cout << "|         " << cur + 1 << "|";
        std::cout << std::setfill(' ') << std::setw(10) << firstName << "|";
        std::cout << std::setfill(' ') << std::setw(10) << lastName << "|";
        std::cout << std::setfill(' ') << std::setw(10) << nickname << "|" << std::endl;
        cur++;
    }
    showContactAtIndex(contact, nbMax);
    return;
}

int main(void) {
    Contact contact[8];
    int nbUser = 0;
    std::string buff;

    std::cout << "This is your phone. Please enter an action: ADD, SEARCH or EXIT." << std::endl;
    std::getline(std::cin, buff);
    while (buff != "EXIT") {
        if (buff == "ADD" && nbUser < 8) {
            contact[nbUser] = addPhone();
            nbUser++;
            std::cout << "Contact is registered." << std::endl;
        } else if (buff == "ADD" && nbUser == 8) {
            std::cout << "Sorry, your phone cannot support more than 8 contacts ..." << std::endl;
        } else if (buff == "SEARCH" && nbUser > 0) {
            showAllContacts(contact, nbUser);
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
