/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:38:00 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 14:26:46 by yoshidakazu      ###   ########.fr       */
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
  /** 💥ここでコンパイルエラーが生じる（∵AAnimalは抽象クラスであることからインスタンスを生成できないため）
   * - エラー文 ---------------------------------------
   * main.cpp:25:36: error: allocating an object of abstract class type 'AAnimal'
   * const AAnimal* meta = new AAnimal();
   *                                    ^
   * ./AAnimal.hpp:35:16: note: unimplemented pure virtual method 'makeSound' in 'AAnimal'
   *   virtual void makeSound(void) const = 0;
   *                ^
   * 1 error generated.
   * make: *** [objs/main.o] Error 1
   * -------------------------------------------------
   */
  // const AAnimal* meta = new AAnimal();  //  💥

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