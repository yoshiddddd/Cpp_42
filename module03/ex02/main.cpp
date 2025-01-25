/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:05:22 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/23 15:20:21 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main() {
    FragTrap frag("FRAG");
    frag.attack("target1");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.highFivesGuys();
    
}


