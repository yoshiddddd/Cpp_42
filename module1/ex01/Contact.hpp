#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
class Contact{
    public:
        Contact();
        // ~Contact();
        
    private:
        str first_name;
        str last_name;
        str nickname;
        str phone_number;
        str secret;
};

#endif
