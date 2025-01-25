/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 08:43:09 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/21 15:15:59 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0){
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
    std::cout << "ClapTrap"<< _name << " Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &clap){
        this->_name = clap._name;
        this->_hit_points = clap._hit_points;
        this->_energy_points = clap._energy_points;
        this->_attack_damage = clap._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

bool ClapTrap::is_move(void) const{
    if(_hit_points <=0)
    {
        std::cout << _name << " no hit points!!" << std::endl;
        return false;
    }
    if(_energy_points <=0)
    {
        std::cout << _name << " no enegy points!!" << std::endl;
        return false;        
    }
    return true;
}

//TODO is_moveで判定
void ClapTrap::attack(const std::string &target){
    if(!is_move())
        return;
    _energy_points -= 1;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    _hit_points -= amount;
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
      if(!is_move())
        return;
    _energy_points -= 1;
    _hit_points += amount;
    if(_hit_points<0)
    _hit_points = 0;
    std::cout << "ClapTrap " << _name << " be repaired " << amount << " points!" << std::endl;
}


