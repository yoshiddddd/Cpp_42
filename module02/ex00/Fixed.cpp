/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:21:14 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/13 12:35:30 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &fixed)
        this->fixed_point_value = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point_value;
}

void Fixed::setRawBits(int const raw){
    this->fixed_point_value = raw;
}

