/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:24:25 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/27 17:52:00 by yoshidakazu      ###   ########.fr       */
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
    if(this->current_num == 8){
        this->is_first_time = 1;
        this->current_num = 0;
    }
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
    this->contact[this->current_num].set_data(first_name,last_name,nickname,phone_number,secret);
    std::cout << this->contact[this->current_num].get_first_name() << std::endl;
    
    this->current_num++;
    
}

void PhoneBook::searchContact(){
    if(this->current_num == 0){
        std::cout << "No data" << std::endl;
        return;
    }
    int roop=0;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    while(this->current_num> roop)
    {
        std::cout << std::setw(10) << roop << "|";
        std::cout << std::setw(10) << this->contact[roop].get_first_name() << "|";
        std::cout << std::setw(10) << this->contact[roop].get_last_name() << "|";
        std::cout << std::setw(10) << this->contact[roop].get_nickname() << std::endl;
        roop++;
    }
    str i;
    int index = 0;    
    std::cout << "what index do you want to search? :";
    std:: getline(std::cin,i);
    index = std::stoi(i);
    if(index < 0 || index > 7){
        std::cout << "Invalid index" << std::endl;
        return;
    }
    std::cout << "SEARCH" << std::endl;
}