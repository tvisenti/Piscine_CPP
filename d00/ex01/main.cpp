/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:39:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/30 14:31:49 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Phone.class.hpp"
#include "Contact.class.hpp"

void showContact(Contact *contact, int nbMax) {
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    int cur = 0;
    while (cur < nbMax) {
        std::string firstName = contact[cur].firstName;
        firstName.resize(10, ' ');
        if (firstName[9] != ' ')
            firstName[9] = '.';
        std::string lastName = contact[cur].lastName;
        lastName.resize(10, ' ');
        if (lastName[9] != ' ')
            lastName[9] = '.';
        std::string nickname = contact[cur].nickname;
        nickname.resize(10, ' ');
        if (nickname[9] != ' ')
            nickname[9] = '.';
        std::cout << "|    " << cur << "     |" << firstName << "|" << lastName << "|" << nickname << "|" << std::endl;
        cur++;
    }
    return;
}

int main( void ) {
    Phone phone;
    Contact contact[8];

    char buff[1024];
    int nbUser = 0;
    std::cin >> buff;
    while (strcmp("EXIT", buff) != 0) {
        if ((strcmp("ADD", buff) == 0) && nbUser < 8) {
            contact[nbUser] = phone.AddPhone();
            nbUser++;
            contact->nb = nbUser;
            std::cout << "Contact is registered." << std::endl;
        } else if ((strcmp("ADD", buff) == 0) && nbUser == 8) {
            std::cout << "Sorry, your phone cannot support more than 8 contacts ..." << std::endl;
        } else if ((strcmp("SEARCH", buff) == 0) && nbUser > 0) {
            showContact(contact, nbUser);
            std::cout << "Search is completed." << std::endl;
        } else if ((strcmp("SEARCH", buff) == 0) && nbUser == 0) {
            std::cout << "Sorry, you don't have friends ..." << std::endl;
        } else {
            std::cout << "This command is unknown : '" << buff << "'." << std::endl;
        }
        std::cout << "Try to type: ADD, SEARCH or EXIT" << std::endl;
        bzero(buff, 1024);
        std::cin >> buff;
    }
    return 0;
}
