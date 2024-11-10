/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:56:37 by kyoshida          #+#    #+#             */
/*   Updated: 2024/11/10 16:26:31 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

typedef std::string str;

    class Zombie{
        public:
            Zombie();
            ~Zombie();
            Zombie *zombieHorde(int N, str name);
            void announce(void);
            void setName(str name);
        private:
            str name;
    };

#endif