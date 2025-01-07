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
        line.erase(start,Replace::m_s1.length());
        line.insert(start,Replace::m_s2);
        start += Replace::m_s2.length();

    }
}

Replace::Replace(str filename, str s1, str s2) : m_filename(filename), m_s1(s1), m_s2(s2)
{
    if(filename.empty())
        std::cout << "error" << std::endl;
    
    std::ifstream infile(m_filename);
    if(infile.is_open() == false)
    {
        std::cout << "already opened" << std::endl;
    }
    std::ofstream outfile(m_filename+".replace");
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