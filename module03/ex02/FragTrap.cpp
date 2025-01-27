/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:50:55 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/26 15:40:52 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap "<< _name << " Name constructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &frag){
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = frag;
}

FragTrap &FragTrap::operator=(const FragTrap &frag){
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &frag){
        this->_name = frag._name;
        this->_hit_points = frag._hit_points;
        this->_energy_points = frag._energy_points;
        this->_attack_damage = frag._attack_damage;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << _name << " is asking for high fives!" << std::endl;
}