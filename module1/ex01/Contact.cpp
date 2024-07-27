/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:24:25 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/27 12:44:37 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(){
    // std::cout<< contact[0] << std::endl; 
    str first_name;
    str last_name;
    str nickname;
    str phone_number;
    str secret;
    
    std::cout << "Please enter your first name : ";
    std:: getline(std::cin, first_name);
    std::cout << "Please enter your last name : ";
    std:: getline(std::cin, last_name);
    std::cout << "Please enter your nickname : ";
    std:: getline(std::cin, nickname);
    std::cout << "Please enter your phone number : ";
    std:: getline(std::cin, phone_number);
    std::cout << "Please enter your secret :";
    std:: getline(std::cin, secret);
// system("clear");
    // this->contact[this->current_num].set_first_name(first_name);
    this->contact[this->current_num].set_first_name(first_name,last_name,nickname,phone_number,secret);
    std::cout << this->contact[this->current_num].get_first_name() << std::endl;
    
    this->current_num++;
    
}

void PhoneBook::searchContact(){
    std::cout << "SEARCH" << std::endl;
}