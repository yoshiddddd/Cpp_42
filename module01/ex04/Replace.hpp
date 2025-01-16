/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:38:06 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/16 16:41:46 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
 #include <cstring>
typedef std::string str;


class Replace
{
    private: 
            str m_filename;
            str m_s1;
            str m_s2;
            void replace_line(str &line);
    public:
            Replace(str filename, str s1, str s2);
};