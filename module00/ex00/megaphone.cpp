/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:33:45 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/12 13:38:19 by kyoshida         ###   ########.fr       */
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
}

int main(int argc, char *argv[]){
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while(*++argv){
        ft_toupper(*argv);
    }
    std::cout << std::endl;
    return 0;
}
