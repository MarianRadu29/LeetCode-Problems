#include"headers.h"

class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (strchr(" ", s[i]) == 0)
            {
                std::string aux = "";
                while (strchr(" ", s[i]) == 0 && i < s.length())
                {
                    aux.append(1, s[i]);
                    i++;
                }
                v.push_back(aux);
            }
        }
        string result = "";
        for (int i = v.size() - 1; i >= 0; i--)
        {
            result = result + v[i];
            if (i > 0)
                result = result + " ";
        }
        return result;
    }
};