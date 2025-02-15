/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:28:23 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/15 17:29:24 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain){
    *this = brain;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    if(this!=&brain)
    {
        const std::size_t idea_size = sizeof(ideas) / sizeof(ideas[0]); //配列数の確保
        for(std::size_t i=0 ; i< idea_size ;i++)
            this->ideas[i] = brain.ideas[i];
    }
     std::cout << "Brain Copy Assigment operator Called" << std::endl;
    return *this;
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
}
