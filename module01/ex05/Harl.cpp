/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:12:21 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/11 22:51:31 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
void Harl::debag(void)
{
    std::cout << "DEBUG" << std::endl;
}  
void Harl::info(void)
{
    std::cout << "INFO" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "WARNING" << std::endl;
}
void Harl::error(void)
{
    std::cout << "ERROR" << std::endl;
}

void Harl::complain(str level)
{
    using HarlMemberFunc = void (Harl::*)(void);

    static const struct {
        const char* name;
        HarlMemberFunc func;
    } funcTable[] = {
        {"DEBUG", &Harl::debag},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };
    for (auto &entry : funcTable)
    {
        if (level == entry.name)
        {
            (this->*entry.func)();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}