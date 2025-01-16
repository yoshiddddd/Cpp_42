/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:41:48 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/16 15:58:52 by kyoshida         ###   ########.fr       */
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
        void announce(void);
        
    private:
        str name;
};
void randomChump(str name);
Zombie *newZombie(str name);
#endif