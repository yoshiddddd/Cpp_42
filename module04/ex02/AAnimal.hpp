/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:17 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 13:34:35 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
//抽象クラス
class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal& Aanimal);
        AAnimal &operator=(const AAnimal &Aanimal);
        virtual ~AAnimal();
        virtual void makeSound() const = 0 ;
        std::string getType() const;
};

#endif