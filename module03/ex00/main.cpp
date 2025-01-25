/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:44:40 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/25 17:12:54 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap robot("test");
  ClapTrap user1;

  robot.attack("enemy1");
  robot.takeDamage(15);
  robot.beRepaired(3);

  robot.attack("enemy2");
  robot.takeDamage(15);
  robot.beRepaired(10);

  user1.takeDamage(20);
  user1.attack("enemy3");
  return 0;
}