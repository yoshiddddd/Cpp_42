/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:07:58 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/11 22:59:57 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

typedef std::string str;

class Harl
{
    private:
            void debug(void);
            void info(void);
            void warning(void);
            void error(void);
    public:
            void complain(str level);
};
#endif