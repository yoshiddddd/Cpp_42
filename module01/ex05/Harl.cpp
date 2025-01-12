/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:12:21 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/12 08:30:30 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
void Harl::debug(void)
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
typedef void (Harl::*HarlMemberFunc)(void);
void Harl::complain(str level)
{
    struct FuncEntry {
        const char*    name;
        HarlMemberFunc funcPtr;
    };

    static const FuncEntry funcTable[] = {
        { "DEBUG",   &Harl::debug   },
        { "INFO",    &Harl::info    },
        { "WARNING", &Harl::warning },
        { "ERROR",   &Harl::error   }
    };

    // 配列の要素数を計算
    const size_t funcCount = sizeof(funcTable) / sizeof(funcTable[0]);

    for (size_t i = 0; i < funcCount; ++i) {
        if (level == funcTable[i].name) {
            (this->*(funcTable[i].funcPtr))();
            return;
        }
    }

    std::cout << "[ UNDEFINED LEVEL ]" << std::endl;
}