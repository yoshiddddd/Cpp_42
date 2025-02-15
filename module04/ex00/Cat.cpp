/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:54:37 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 16:21:31 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) :Animal() {
    _type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) {
    *this = cat;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if(this != &cat) {
        // this->_type = cat._type;
        Animal::operator =(cat);
    }
    std::cout << "Cat Copy Assigment operator Called" << std::endl;
    return *this;
}

Cat::~Cat(void){
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound(void) const 
{
    std::cout << "meowwwwww" << std::endl;
}