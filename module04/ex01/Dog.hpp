/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:51:11 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/28 11:52:45 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        ~Dog();
        void makeSound() const;
};

#endif