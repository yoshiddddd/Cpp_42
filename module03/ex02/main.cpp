/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:05:22 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/25 17:53:05 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define RULED_LINE " ────────────────────"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << RULED_LINE << std::endl;
}


int main() {
  put_line(); //0
  FragTrap s1("FT");
  
  put_line(); //1
  s1.attack("target1");
  
  put_line();//2
  s1.takeDamage(5);
  
  put_line(); //3
  s1.beRepaired(3);
  
  put_line(); //4
  s1.highFivesGuys();
  
  put_line(); //5
  FragTrap s1_copy(s1);
  
  put_line(); //5
  s1_copy.highFivesGuys();
  
  put_line(); //6
  FragTrap s1_assigned;
  
  put_line(); //7
  s1_assigned = s1;
  
  put_line(); //8
  s1_assigned.highFivesGuys();
  
  put_line(); //9
  return 0;
    
}


