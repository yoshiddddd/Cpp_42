/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:40:57 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/04 18:31:24 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name) {}

void HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
	nullptr;
}

void HumanB::attack(void) const
{
	if (this->m_weapon)
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	else
		std::cout << this->m_name << " has no weapon!" << std::endl;
}