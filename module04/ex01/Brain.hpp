/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:28:28 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/02/09 17:11:22 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define IDEA_N 100
class Brain{
    private:
        std::string ideas[IDEA_N];
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        virtual ~Brain();
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;
};


#endif