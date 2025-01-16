/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:39:51 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/16 15:52:32 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = NULL;
    
    zombie = newZombie("heap");
    zombie->announce();
    // zombie->randomChump("stack");
    randomChump("stack");
    delete zombie;
	return 0;
}