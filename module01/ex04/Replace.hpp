#include <iostream>
#include <fstream>
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