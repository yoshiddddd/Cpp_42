/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:54:56 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 14:13:58 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), _brain(new Brain()) {
  _type = "Cat";
  std::cout << "(constructor)Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : AAnimal(cat), _brain(new Brain(*cat._brain)) {
  *this = cat;
  std::cout << "(constructor)Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat) {
  if (this != &cat) {
    AAnimal::operator=(cat);
    *_brain = *cat._brain;
  }
  std::cout << "Cat Copy assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat(void) {
  delete _brain;
  std::cout << "(constructor)Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "(Cat sound)meowwwww" << std::endl;
}
