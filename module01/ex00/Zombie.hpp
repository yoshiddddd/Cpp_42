/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:41:48 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/31 18:08:07 by kyoshida         ###   ########.fr       */
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
        // void set_name(str name);
    private:
    str name;
};

#endif