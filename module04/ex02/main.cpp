/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:38:00 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 17:53:32 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << " ────────────────────" << std::endl;
}


int main() {

  // const AAnimal* meta = new AAnimal(); 

  const AAnimal* j = new Dog();
  const AAnimal* i = new Cat();

  put_line();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  put_line();
  i->makeSound();
  j->makeSound();

  put_line();
  delete j;
  delete i;

  put_line();
  return 0;
}