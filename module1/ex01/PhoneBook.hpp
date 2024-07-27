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

#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
// 動的にサイズ変更してくれる
typedef std::string str;
class PhoneBook{
    public:
        // PhoneBook(){
        //     current_num = 0;
        // };
        // ~PhoneBook();
        void addContact();
        void searchContact();
        str call_get_function(int index, int type);
    private:
    int is_first_time;
    int current_num;
    int size;
    Contact contact[8];
};

#endif