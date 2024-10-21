/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:44 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/21 22:09:35 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
    Zombie *zombie = NULL;
    
   zombie = zombie->zombieHorde(5, "hello");
    // zombie = zombie->newZombie("hello");
    // zombie->randomChump("hoge");
    delete zombie;
	return 0;
}
