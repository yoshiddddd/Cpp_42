/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:39:51 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/31 17:56:11 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie is born" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie is dead" << std::endl;
}
void Zombie::announce(void)
{
	this->name = "Zombie";
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}

int main(void)
{
	Zombie Zombie;
	Zombie.announce();
	return 0;
}