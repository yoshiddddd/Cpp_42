/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:12:21 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/11 22:59:55 by yoshidakazu      ###   ########.fr       */
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
    // 構造体とメンバ関数ポインタ
    struct FuncEntry {
        const char*    name;
        HarlMemberFunc funcPtr;
    };

    // range-based for ではなく、配列サイズを明示 & 通常の for にする
    static const FuncEntry funcTable[] = {
        { "DEBUG",   &Harl::debug   },
        { "INFO",    &Harl::info    },
        { "WARNING", &Harl::warning },
        { "ERROR",   &Harl::error   }
    };

    // 配列の要素数を計算
    const size_t funcCount = sizeof(funcTable) / sizeof(funcTable[0]);

    // auto &entry : funcTable を使わないで、インデックスでループ
    for (size_t i = 0; i < funcCount; ++i) {
        // ここで funcTable[i].name と level を比較
        if (level == funcTable[i].name) {
            // メンバ関数ポインタ呼び出し
            (this->*(funcTable[i].funcPtr))();
            return;
        }
    }

    // マッチしない場合の処理（任意）
    std::cout << "[ UNDEFINED LEVEL ]" << std::endl;
}