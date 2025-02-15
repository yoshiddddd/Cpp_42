/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:38:00 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 16:06:21 by kyoshida         ###   ########.fr       */
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
  const Animal* meta = new Animal();                 
  const Animal* j = new Dog();                        
  const Animal* i = new Cat();                        
  const WrongAnimal* k = new WrongCat();              

  put_line();
  std::cout << j->getType() << " " << std::endl;     
  std::cout << i->getType() << " " << std::endl;     
  std::cout << k->getType() << " " << std::endl;      

  put_line();
  i->makeSound();                                     
  j->makeSound();                                     
  k->makeSound();                                    
  meta->makeSound();                                  

  put_line();
  delete meta;                                        
  delete k;                                         
  delete j;                                        
  delete i;                                           

  put_line();
  return 0;
}