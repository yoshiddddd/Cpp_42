/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:01 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 12:11:50 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) {
    *this = animal;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
    if(this != &animal) {
        this->_type = animal._type;
    }
    std::cout << "Animal Copy Assigment operator Called" << std::endl;
}

Animal::~Animal(void){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const 
{
    return this->_type;
}

void Animal::makeSound(void) const 
{
    std::cout << "Animal" << std::endl;
}
