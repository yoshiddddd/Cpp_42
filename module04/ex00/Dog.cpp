/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:54:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 12:27:47 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :Animal() {
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) {
    *this = dog;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    if(this != &dog) {
        this->_type = dog._type;
    }
    std::cout << "Dog Copy Assigment operator Called" << std::endl;
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound(void) const 
{
    std::cout << "meowwwwww" << std::endl;
}