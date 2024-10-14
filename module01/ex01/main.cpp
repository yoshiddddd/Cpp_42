/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:54:44 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/14 16:54:48 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
    Zombie *zombie = NULL;
    
    zombie = zombie->newZombie("hello");
    zombie->randomChump("hoge");
    delete zombie;
	return 0;
}