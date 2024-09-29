/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:39:51 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/09/29 16:11:45 by yoshidakazu      ###   ########.fr       */
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