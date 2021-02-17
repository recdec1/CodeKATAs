#include <string>
using namespace std;

string to_camel_case(string text)
{
    if ((int)text.length() == 0) return text;
    int i = 0;
    for (auto it = text.begin(); it != text.end(); ++it)
    {
        
        if (*it == '_' || *it == '-')
        {
            text.erase(text.begin() + i);
            text.insert(text.begin() + i, toupper(*++it));
        }
        i++;
    }
    return text;
}

// optimal solution


//std::string to_camel_case(std::string text)
//{
//    for (int i = 0; i < text.size(); ++i)
//    {
//        if (text[i] == '-' || text[i] == '_')
//        {
//            text.erase(i, 1);
//            text[i] = toupper(text[i]);
//        }
//    }
//    return text;
//}