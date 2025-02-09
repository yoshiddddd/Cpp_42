/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:19:42 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/03 11:04:12 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    _type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongcat) {
    *this = wrongcat;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat) {
    if(this != &wrongcat) {
        this->_type = wrongcat._type;
    }
    std::cout << "WrongCat Copy Assigment operator Called" << std::endl;
    return *this;
}

WrongCat::~WrongCat(void){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "wrongmeowww" << std::endl;
}
