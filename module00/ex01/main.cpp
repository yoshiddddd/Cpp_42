/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:33:39 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/12 13:48:36 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    str line;
    PhoneBook PhoneBook;
    
    while(1)
    {
        std::cout << "Please ADD, SEARCH or EXIT : ";
        
        std::getline(std::cin, line);
        if(std::cin.eof()||std::cin.fail())
        {
            std::cout << "error" << std::endl;
            exit(0);
        }
    
        if(!line.compare("ADD"))
        {
            PhoneBook.addContact();
        }
        else if(!line.compare("SEARCH"))
        {
            PhoneBook.searchContact();
        }
        else if(!line.compare("EXIT"))
        {
            std::cout << "GOOD BYE" << std::endl;
            break;
        }
    }
    return 0;
}