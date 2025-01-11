/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:07:58 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/11 22:21:10 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>


typedef std::string str;
class Harl
{
    private:
            void debag(void);
            void info(void);
            void warning(void);
            void error(void);
    public:
            void complain(str level);
};
#endif