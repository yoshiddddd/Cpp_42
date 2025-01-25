/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:18:57 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/25 17:31:33 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define RULED_LINE " ────────────────────"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << RULED_LINE << std::endl;
}
int main() {
  ScavTrap s1("ST");

  put_line(); //0
  s1.attack("target1");

  put_line(); //1
  s1.takeDamage(5);

  put_line(); //2
  s1.beRepaired(3);
  s1.takeDamage(150);
  s1.attack("target2");

  put_line(); //3
  s1.guardGate();

  put_line(); //4
  ScavTrap s1_copy(s1);

  put_line(); //5
  s1_copy.guardGate();

  put_line(); //6
  ScavTrap s1_assigned;

  put_line(); //7
  s1_assigned = s1;

  put_line(); //8
  s1_assigned.guardGate();

  put_line(); //9
  return 0;
}
