/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:55:02 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/21 22:09:09 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie" <<this->name <<"is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie "<<this->name << " is dead" << std::endl;
}
void Zombie::announce(void)
{
	// this->name = "Zombie";
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}
void Zombie::setName(std::string name)
{
    this->name = name;
}