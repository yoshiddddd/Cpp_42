/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:40:57 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/07 16:19:30 by kyoshida         ###   ########.fr       */
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
		std::cout << this->m_name << " has no weapon!" << std::endl;
}