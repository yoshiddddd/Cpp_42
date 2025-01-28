/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:10:55 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 21:38:12 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
    *this = wronganimal;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
    if(this != &wronganimal) {
        this->_type = wronganimal._type;
    }
    std::cout << "WrongAnimal Copy Assigment operator Called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return _type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal sound" << std::endl;
}

