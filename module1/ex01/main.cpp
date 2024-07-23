/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:33:39 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/23 14:14:55 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
typedef std::string str;


int main(void)
{
    str line;
    while(1)
    {
        std::cout << "Type ADD, SEARCH or EXIT : ";
        std::getline(std::cin, line);
        if(!line.compare("EXIT"))
        {
            std::cout << "GOOD BYE" << std::endl;
            break;
        }
        std::cout << line << std::endl;
    }
    // int  phone_book[8];
}