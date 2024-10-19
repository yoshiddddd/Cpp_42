/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:55:35 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/19 19:24:29 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *Zombie::zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombie = new Zombie[N];
    while(i < N)
    {
        zombie[i].setName(name);
        zombie[i].announce();
        // zombie->announce();
        i++;
    }
}