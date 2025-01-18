/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:39:51 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/17 23:21:36 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie stackZombie("hogeta");
    Zombie *zombie = NULL;
    
    zombie = newZombie("heap");
    zombie->announce();
    // zombie->randomChump("stack");
    randomChump("stack");
    delete zombie;
	return 0;
}