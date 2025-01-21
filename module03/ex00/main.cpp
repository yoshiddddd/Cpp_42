/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:44:40 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/21 14:40:40 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap robot("test");

  robot.attack("enemy1");
  robot.takeDamage(15);
  robot.beRepaired(3);

  robot.attack("enemy2");
  robot.takeDamage(15);
  robot.beRepaired(10);
  return 0;
}