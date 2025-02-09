/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:28:28 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/09 15:21:38 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        virtual ~Brain();
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;
};


#endif