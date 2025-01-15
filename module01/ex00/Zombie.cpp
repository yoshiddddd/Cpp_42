/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:31:24 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/15 13:09:26 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name){
    this->name = name;
	std::cout << "Zombie " <<name <<" is born" << std::endl;
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