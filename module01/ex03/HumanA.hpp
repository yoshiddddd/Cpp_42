/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 00:58:46 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/12/22 00:58:47 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	// HumanAが保持するWeaponがポインタ型でなく参照型である理由は
	// ・HumanAは必ず武器を持つことを保証するため
		// ・参照型の変数はポインタ型のそれとは異なり，nullptr(何も指さない)を代入できない
	// ・HumanAは持つ武器を変えないことを保証するため
		// ・参照型の変数はポインタ型のそれとは異なり，指す先を変えることができない
	Weapon &m_weapon;
	std::string m_name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void) const;
};

#endif