/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:01 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 13:27:16 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal") {
    std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& Aanimal) {
    *this = Aanimal;
    std::cout << "AAnimal Copy Constructor Called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &Aanimal) {
    if(this != &Aanimal) {
        this->_type = Aanimal._type;
    }
    std::cout << "AAnimal Copy Assigment operator Called" << std::endl;
    return *this;
}

AAnimal::~AAnimal(void){
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const 
{
    return this->_type;
}

void AAnimal::makeSound(void) const 
{
    std::cout << "AAnimal" << std::endl;
}
