/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:33:39 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/23 23:16:39 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main(void)
{
    str line;
    PhoneBook PhoneBook;
    while(1)
    {
        std::cout << "Type ADD, SEARCH or EXIT : ";
        
        std::getline(std::cin, line);
        if(!line.compare("ADD"))
        {
            PhoneBook.addContact();
        }
        else if(!line.compare("SEARCH"))
        {
            PhoneBook.searchContact();
        }
        else
        if(!line.compare("EXIT"))
        {
            std::cout << "GOOD BYE" << std::endl;
            break;
        }
        std::cout << line << std::endl;
    }
    return 0;
    // int  phone_book[8];
}