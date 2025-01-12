/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 22:32:45 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/12 11:52:56 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <sstream>
// #include "PhoneBook.hpp"
typedef std::string str;
class Contact{
    public:
        Contact();
        // ~Contact();
        str get_first_name(); 
        str get_last_name();
        str get_nickname();
        str get_phone_number();
        str get_secret();
        void set_data(str first_name , str last_name , str nickname , str phone_number , str secret);
    private:
    // private変数にアクセスするにはpublicメンバ関数を使う必要がある。作る
        str first_name;
        str last_name;
        str nickname;
        str phone_number;
        str secret;
};

#endif
