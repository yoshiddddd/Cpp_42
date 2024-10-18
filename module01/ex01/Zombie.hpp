/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:56:37 by kyoshida          #+#    #+#             */
/*   Updated: 2024/10/15 23:38:02 by yoshidakazu      ###   ########.fr       */
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
        private:
            void announce(void);
            void setName(str name);
            str name;
    };

#endif