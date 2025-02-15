/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:54:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 12:12:13 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain()) { // deep copy：新しいメモリ領域を割り当て，データをコピーする
  _type = "Dog";
  std::cout << "(constructor)Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other),  _brain(new Brain(*other._brain)) { // deep copy：新しいメモリ領域を割り当て，データをコピーする
  *this = other;
  std::cout << "(constructor)Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
    // deep copy：新しいメモリ領域を割り当て，データをコピーする
    delete _brain;
    _brain = new Brain(*other._brain);
  }
  std::cout << "Dog Copy assignment operator called" << std::endl;
  return *this;
}

Dog::~Dog(void) {
  delete _brain;
  std::cout << "(constructor)Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "(Dog sound)Ahwoooooo" << std::endl;
}

Brain *Dog::getBrain(void) const
{
  return _brain;
}