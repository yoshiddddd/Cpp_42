/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:27:19 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/04 19:27:20 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type) {}

std::string const& Weapon::getType() const
{
	return this->m_type;
}

void Weapon::setType(std::string type)
{
	this->m_type = type;
}