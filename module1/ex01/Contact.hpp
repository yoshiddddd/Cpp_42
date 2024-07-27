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
// #include "PhoneBook.hpp"
typedef std::string str;
class Contact{
    public:
        Contact();
        // ~Contact();
        str get_first_name(); 
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
