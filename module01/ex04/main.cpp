/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:38:09 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/16 12:25:40 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 0;
    }
    Replace(argv[1],argv[2],argv[3]);
}