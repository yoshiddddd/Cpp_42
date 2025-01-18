/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:40:57 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/18 11:36:32 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name) {}

void HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->m_weapon)
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	else
		std::cout << this->m_name << "no weapon!" << std::endl;
}
