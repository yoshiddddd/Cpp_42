/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:55:02 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/14 16:55:05 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name){
    this->name = name;
	std::cout << "Zombie" <<name <<"is born" << std::endl;
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