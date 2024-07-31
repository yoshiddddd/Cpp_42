/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:41:48 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/31 15:43:46 by yoshidakazu      ###   ########.fr       */
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
        void announce();
        void set_name(str name);

    private:
    str name;
};

#endif