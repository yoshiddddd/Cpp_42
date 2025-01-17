/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:16:16 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/17 16:40:57 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixed_point_value(0){
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &fixed){
    *this = fixed;
}

Fixed::Fixed(int num)
{
    fixed_point_value = num * (1 << fractional_bits);
}

Fixed::Fixed(float fnum)
{
    fixed_point_value = roundf(fnum * (1 << fractional_bits));
}

Fixed &Fixed::operator=(const Fixed &fixed){
    if (this != &fixed)
        this->fixed_point_value = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &fixed) const{
    return this->fixed_point_value > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const{
    return this->fixed_point_value < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const{
    return this->fixed_point_value >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const{
    return this->fixed_point_value <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const{
    return this->fixed_point_value == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const{
    return this->fixed_point_value != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const{
    Fixed tmp;
    tmp.setRawBits(this->fixed_point_value + fixed.getRawBits());
    return tmp;
}

Fixed Fixed::operator-(const Fixed &fixed) const{
    Fixed tmp;
    tmp.setRawBits(this->fixed_point_value - fixed.getRawBits());
    return tmp;
}

Fixed Fixed::operator*(const Fixed &fixed) const{
    Fixed tmp;
    tmp.setRawBits((this->fixed_point_value * fixed.getRawBits()) >> fractional_bits);
    return tmp;
}

Fixed Fixed::operator/(const Fixed &fixed) const{
    Fixed tmp;
    tmp.setRawBits((this->fixed_point_value << fractional_bits) / fixed.getRawBits());
    return tmp;
}

