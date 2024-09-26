/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:39:51 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/09/26 19:41:42 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = name;
	std::cout << "Zombie" <<name <<"is born" << std::endl;
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