/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:28:23 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/09 17:25:50 by kyoshida         ###   ########.fr       */
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
        for(std::size_t i=0 ; i< IDEA_N ;i++)
            this->ideas[i] = brain.ideas[i];
    }
     std::cout << "Brain Copy Assigment operator Called" << std::endl;
    return *this;
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
    
}
std::string Brain::getIdea(int i) const{
    
}
