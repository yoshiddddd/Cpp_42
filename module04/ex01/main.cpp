/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:38:00 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 14:27:29 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << " ────────────────────" << std::endl;
}

static void put_miniline(void)
{
  std::cout << "─────" << std::endl;
}

// 👈copiedDogのoriginalDogへの代入がdeep copyとなっているかをテストする．
static void testDeepCopy() {
  std::cout << "//////// d e e p   c o p y   t e s t ////////" << std::endl;
  Dog originalDog;
  originalDog.getBrain()->setIdea(0, "hoge");

  Dog copiedDog(originalDog); // 👈
  // deep copyならばcopiedDogとoriginalDogのメモリ領域は共有されていない．
  // そのため，この処理によってoriginalDogのideaもまた"fuga"とならないはずである．
  copiedDog.getBrain()->setIdea(0, "fuga");

  std::cout << "Original Dog Brain Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
  std::cout << "Copied Dog Brain Idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

  // deep copyでは，オブジェクトのメンバ変数が指しているデータも含めて新しいメモリ領域にコピーする．
  // shallow copyでは，オブジェクトのメンバ変数の値をそのままコピーする．
  if (originalDog.getBrain()->getIdea(0) == copiedDog.getBrain()->getIdea(0)) {
      std::cout << ">>>>>>>>>> Error: Shallow copy detected! <<<<<<<<<<" << std::endl;
  } else {
      std::cout << ">>>>>>>>>> Success: Deep copy verified! <<<<<<<<<<" << std::endl;
  }
}

// 関数の挙動が仕様書に記載されたものと一致するかを確認するテスト1
static void test1(void)
{
  std::cout << "//////// t e s t 1 ////////" << std::endl;
  const Animal* j = new Dog();  //  ①(constructor)Animal Default constructor called ②(constructor)Brain Default constructor called ③(constructor)Dog Default constructor called

  put_line();
  const Animal* i = new Cat();  //  ④(constructor)Animal Default constructor called ⑤(constructor)Brain Default constructor called ⑥(constructor)Cat Default constructor called
  put_line();
  j->makeSound();               //  ⑦(Dog sound)Ahwoooooo
  put_line();
  i->makeSound();               //  ⑧(Cat sound)meowwwww
  put_line();

  //  should not create a leak
  delete j;                     //  ⑨(constructor)Brain destructor called ⑩(constructor)Dog destructor called ⑪(constructor)Animal destructor called
  put_line();
  delete i;                     //  ⑫(constructor)Brain destructor called ⑬(constructor)Cat destructor called ⑭(constructor)Animal destructor called
}

// 関数の挙動が仕様書に記載されたものと一致するかを確認するテスト2
static void test2(void)
{
  std::cout << "//////// t e s t 2 ////////" << std::endl;
  Animal* animals[10];
  for (int i = 0; i < 5; ++i) {
    animals[i] = new Dog();
    put_miniline();
    animals[i + 5] = new Cat();
    put_miniline();
  }

  put_line();

  for (int i = 0; i < 10; ++i) {
    animals[i]->makeSound();
    put_miniline();
    delete animals[i];
    put_miniline();
  }
}

int main() {
  test1();
  test2();
  testDeepCopy();
}
