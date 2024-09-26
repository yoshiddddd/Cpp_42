/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:31:24 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/09/26 21:32:10 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie::Zombie(str name)
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
	// this->name = "Zombie";
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}