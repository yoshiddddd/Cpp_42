/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:47:03 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/13 14:11:31 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(int num)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point_value = num * (1 << fractional_bits);
}

Fixed::Fixed(float fnum)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point_value = roundf(fnum * (1 << fractional_bits));
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

int Fixed::toInt(void) const
{
    return (int)fixed_point_value / (1 << fractional_bits);
}

float Fixed::toFloat(void) const
{
    return (float)fixed_point_value / (1 << fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}