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
#include <sstream>
#include "Contact.hpp"
#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
#define MAX_VIEW_LENGTH 9

typedef std::string str;
class PhoneBook{
    public:
        PhoneBook();
        void addContact();
        void searchContact();
        int is_valid_num(str num);
        str call_get_function(int index, int type);
    private:
    int is_first_time;
    int current_num;
    int size;
    Contact contact[8];
};

#endif