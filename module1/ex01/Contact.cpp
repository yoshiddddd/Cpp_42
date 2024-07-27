/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:24:25 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/27 20:11:13 by yoshidakazu      ###   ########.fr       */
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
    if(first_name.empty()){
        std::cout << "Invalid first name" << std::endl;
        return;
    }
    std::cout << "Please enter your last name : ";
    std:: getline(std::cin, last_name);
    if(last_name.empty()){
        std::cout << "Invalid last name" << std::endl;
        return;
    }
    std::cout << "Please enter your nickname : ";
    std:: getline(std::cin, nickname);
    if(nickname.empty()){
        std::cout << "Invalid nickname" << std::endl;
        return;
    }
    std::cout << "Please enter your phone number : ";
    std:: getline(std::cin, phone_number);
    if(phone_number.empty()){
        std::cout << "Invalid phone number" << std::endl;
        return;
    }
    std::cout << "Please enter your secret :";
    std:: getline(std::cin, secret);
    if(secret.empty()){
        std::cout << "Invalid secret" << std::endl;
        return;
    }
// system("clear");
    // this->contact[this->current_num].set_first_name(first_name);
    this->contact[this->current_num].set_data(first_name,last_name,nickname,phone_number,secret);
    std::cout << this->current_num << std::endl;
    if(this->current_num<8 && this->is_first_time == 0){
        this->size++;
    }
    this->current_num++;
    
}

str PhoneBook::call_get_function(int index, int type){
    str string;
    Contact Contact;
    if(type == 0){
        string = this->contact[index].get_first_name();
    }
    else if(type == 1){
        string = this->contact[index].get_last_name();
    }
    else if(type == 2){
        string = this->contact[index].get_nickname();
    }
    if(string.length() > 9){
            string = string.substr(0,9) + ".";
        }

    return string;
}

void PhoneBook::searchContact(){
    Contact Contact;
    if(this->current_num == 0){
        std::cout << "No data" << std::endl;
        return;
    }
    int roop=0;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    while(this->size> roop)
    {
        str first_name = this->call_get_function(roop,FIRST_NAME);
        str last_name = this->call_get_function(roop,LAST_NAME);
        str nickname = this->call_get_function(roop,NICKNAME);
        
        std::cout << std::setw(10) << roop << "|";
        std::cout << std::setw(10) << first_name << "|";
        std::cout << std::setw(10) << last_name << "|";
        std::cout << std::setw(10) << nickname<< std::endl;
        roop++;
    }
    str i;
    int index = 0;    
    std::cout << "what index do you want to search? :";
    std:: getline(std::cin,i);
    if(i.empty()){
        std::cout << "Please put index" << std::endl;
        return;
    }
    index = std::stoi(i);
    if(index < 0 || index > 7 ||(index >= this->current_num && this->is_first_time == 0)){
        std::cout << "Invalid index" << std::endl;
        return;
    }
    std::cout << "first name : " << this->contact[index].get_first_name() << std::endl;
    std::cout << "last name : " << this->contact[index].get_last_name() << std::endl;
    std::cout << "nickname : " << this->contact[index].get_nickname() << std::endl;
    std::cout << "phone number : " << this->contact[index].get_phone_number() << std::endl;
    std::cout << "secret : " << this->contact[index].get_secret() << std::endl;
    // std::cout << "SEARCH" << std::endl;
}