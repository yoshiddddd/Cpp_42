/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:44 by kyoshida          #+#    #+#             */
/*   Updated: 2024/11/10 16:31:40 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
    Zombie *zombie = NULL;
    int N = 5;
    int i = 0;
   zombie = zombie->zombieHorde(N, "hello");
    // zombie = zombie->newZombie("hello");
    // zombie->randomChump("hoge");
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
        delete[] zombie;
	return 0;
}
