/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 08:06:59 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/16 16:42:20 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::replace_line(str &line)
{
    size_t start;

    start = 0;
    while(1)
    {
        start = line.find(Replace::m_s1,start);
        if(start == std::string::npos)
            break;
            //m_s1分の文字列を削除
        line.erase(start,Replace::m_s1.length());
        //削除した部分にm_s2を代入
        line.insert(start,Replace::m_s2);
        start += Replace::m_s2.length();

    }
}

Replace::Replace(str filename, str s1, str s2) : m_filename(filename), m_s1(s1), m_s2(s2)
{
    if(filename.empty())
        std::cout << "error" << std::endl;
    
    std::ifstream infile(m_filename.c_str());
    if(!infile)
    {
        std::cout << "error infile" << std::endl;
    }
    std::ofstream outfile((m_filename+".replace").c_str());
    if(!outfile)
        std::cout << "error outfile" << std::endl;
    str line;
    while(std::getline(infile,line))
    {
        replace_line(line);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();

}