/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:56:37 by kyoshida          #+#    #+#             */
/*   Updated: 2025/01/16 16:03:38 by kyoshida         ###   ########.fr       */
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
            void announce(void);
            void setName(str name);
        private:
            str name;
    };
    Zombie *zombieHorde(int N, str name);

#endif