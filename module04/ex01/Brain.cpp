/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:28:23 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/14 21:17:50 by yoshidakazu      ###   ########.fr       */
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
    if(i >= 0 && i <= IDEA_N - 1 )
        ideas[i] = idea;
}
std::string Brain::getIdea(int i) const{
    if(i >= 0 && i <= IDEA_N - 1 )
        return ideas[i];
    else
        return NULL;
}
