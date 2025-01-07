/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:27:03 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/05 06:35:05 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string m_type;
public:
	Weapon(std::string type);
	std::string const& getType() const;
	void setType(std::string type);
};



#endif