/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 00:58:28 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/12/22 00:58:29 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_weapon(weapon) , m_name(name){}

void HumanA::attack(void) const
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
}