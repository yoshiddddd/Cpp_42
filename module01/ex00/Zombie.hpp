/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:41:48 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/09/26 21:31:07 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

typedef std::string str;
class Zombie{
    public:
        Zombie(str name);
        ~Zombie();
        // void set_name(str name);
        Zombie *newZombie(str name);
        void randomChump(str name);
    private:
        void announce(void);
        str name;
};

#endif