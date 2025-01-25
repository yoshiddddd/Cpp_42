/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:08:38 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/23 12:15:36 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(){
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap "<< _name << " Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav){
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav){
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &scav){
        this->_name = scav._name;
        this->_hit_points = scav._hit_points;
        this->_energy_points = scav._energy_points;
        this->_attack_damage = scav._attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(!is_move())
        return;
        _energy_points -= 1;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode" << std::endl;
}