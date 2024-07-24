#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include "Contact.hpp"

// 動的にサイズ変更してくれる
typedef std::string str;
class PhoneBook{
    public:
        PhoneBook();
        // ~PhoneBook();
        void addContact();
        void searchContact();
    private:
    int current_num;
    int size;
    Contact contact[8];
};

#endif