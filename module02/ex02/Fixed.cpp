/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:16:16 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/17 17:56:19 by yoshidakazu      ###   ########.fr       */
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

Fixed &Fixed::operator++() {
  this->fixed_point_value++;
  Fixed &after_increment = *this;
  return after_increment;
}

//引数にintを持つ方が後置とコンパイルされる
Fixed Fixed::operator++(int) {
  Fixed before_increment = *this;
  this->fixed_point_value++;
  return before_increment;
}

Fixed &Fixed::operator--() {
  this->fixed_point_value--;
  Fixed &after_decrement = *this;
  return after_decrement;
}

Fixed Fixed::operator--(int) {
  Fixed before_decrement = *this;
  this->fixed_point_value--;
  return before_decrement;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return a > b ? a : b;
}

int Fixed::getRawBits(void) const{
    return this->fixed_point_value;
}

void Fixed::setRawBits(int const raw){
    this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const{
    return (float)fixed_point_value / (1 << fractional_bits);
}

int Fixed::toInt(void) const{
    return (int)fixed_point_value / (1 << fractional_bits);
}

