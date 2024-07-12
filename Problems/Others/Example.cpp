#include <iostream>
#include <string>

void removeSubstring(std::string &s, const std::string &sub)
{
    size_t pos;
    while ((pos = s.find(sub)) != std::string::npos)
    {
        s.erase(pos, sub.length());
    }
}

int main()
{
    std::string s = "cdbcbbaaabab";
    std::string sub = "ba";

    std::cout << "Original string: " << s << std::endl;

    removeSubstring(s, sub);

    std::cout << "String after removing substring \"" << sub << "\": " << s << std::endl;

    return 0;
}
