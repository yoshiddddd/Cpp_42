/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:07:58 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/11 22:10:38 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


typedef std::string str;
class Harl
{
    private:
            void debag();
            void info();
            void warning();
            void error();
    public:
            void complain(str level);
};