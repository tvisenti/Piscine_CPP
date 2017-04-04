/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:05:07 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 10:11:33 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

void   ponyOnTheHeap() {
    Pony*    newPony = new Pony("HEAP");

    newPony->name = "HEAP";
	newPony->anyAction();
    delete newPony;
    return;
}

void    ponyOnTheStack() {
    Pony    newPony = Pony("STACK");

    newPony.name = "STACK";
	newPony.anyAction();
    return;
}

int     main() {
    std::cout << "ponyOnTheHeap is invoked" << std::endl;
    ponyOnTheHeap();
    std::cout << "ponyOnTheStack is invoked" << std::endl;
    ponyOnTheStack();
    std::cout << "End of main" << std::endl;
    return (0);
}
