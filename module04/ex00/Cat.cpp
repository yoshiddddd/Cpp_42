/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:54:37 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 12:40:50 by kyoshida         ###   ########.fr       */
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
        this->_type = cat._type;
    }
    std::cout << "Cat Copy Assigment operator Called" << std::endl;
}

Cat::~Cat(void){
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound(void) const 
{
    std::cout << "meowwwwww" << std::endl;
}