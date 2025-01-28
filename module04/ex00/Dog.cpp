/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:54:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 21:37:47 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :Animal() {
    _type = "Dog";
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
    return *this;
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound(void) const 
{
    std::cout << "ahwoooooooo" << std::endl;
}