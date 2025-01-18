/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:55:35 by kyoshida          #+#    #+#             */
/*   Updated: 2025/01/18 10:36:58 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombie = new Zombie[N];
    while(i < N)
    {
        zombie[i].setName(name);
        i++;
    }
    return zombie;
}