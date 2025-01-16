/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:55:35 by kyoshida          #+#    #+#             */
/*   Updated: 2025/01/16 16:03:32 by kyoshida         ###   ########.fr       */
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
        // zombie->announce();
        i++;
    }
    return zombie;
}