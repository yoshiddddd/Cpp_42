/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 12:44:40 by kyoshida         ###   ########.fr       */
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
        Animal(std::string type);
        virtual ~Animal();
        virtual void makeSound() const ;
        std::string getType() const;
};

#endif