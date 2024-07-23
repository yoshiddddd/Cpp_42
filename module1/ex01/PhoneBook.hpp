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
typedef std::string str;
class PhoneBook{
    public:
        // PhoneBook();
        // ~PhoneBook();
        void addContact();
        void searchContact();
    private:
    Contact contact[8];
};

#endif