/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:52:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/27 17:50:31 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
Contact::Contact() {
}
void Contact::set_data(str first_name , str last_name , str nickname , str phone_number , str secret){
    this->first_name=first_name;
    this->last_name=last_name;
    this->nickname=nickname;
    this->phone_number=phone_number;
    this->secret=secret;
}


str Contact::get_first_name(){
    return this->first_name;
}
str Contact::get_last_name(){
    return this->last_name;
}
str Contact::get_nickname(){
    return this->nickname;
}
str Contact::get_phone_number(){
    return this->phone_number;
}