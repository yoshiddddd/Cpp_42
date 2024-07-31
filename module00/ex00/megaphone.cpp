/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:33:45 by yoshidakazu       #+#    #+#             */
/*   Updated: 2024/07/21 19:26:33 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_toupper(char *str){
    int i = 0;
    while(str[i]){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
            std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}
// <<によって出力される文字列は、標準出力ストリームに書き込まれる。
int main(int argc, char *argv[]){
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while(*++argv){
        ft_toupper(*argv);
    }
    return 0;
}