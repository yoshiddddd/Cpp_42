/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:44 by kyoshida          #+#    #+#             */
/*   Updated: 2025/01/16 16:03:54 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
    Zombie *zombie = NULL;
    int N = 5;
    int i = 0;
   zombie = zombieHorde(N, "hello");
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
        delete[] zombie;
	return 0;
}
