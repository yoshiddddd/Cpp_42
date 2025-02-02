/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 21:36:43 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
//抽象クラス
class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal();
        virtual void makeSound() const ;
        std::string getType() const;
};

#endif