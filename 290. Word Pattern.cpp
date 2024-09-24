#include"headers.h"

class Solution {
public:
   bool wordPattern(string pattern, string s) 
    {
        vector<string> list;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                std::string aux;
                while (s[i] != ' ' && i < s.length())
                {
                    aux.append(1, s[i]);
                    i++;
                }
                list.push_back(aux);
                
            }
        }
        if(list.size()!=pattern.size())
            return false;
        unordered_map<char, string> u_map;
        int index = 0;
        for (char c : pattern)
        {
            if (u_map.find(c) == u_map.end())
            {
                for (auto p : u_map)
                    if (p.second == list[index])
                        return false;
                u_map.insert({ c,list[index] });
                
            }
            else
            {
                if (u_map[c] != list[index])
                    return false;
            }
            index++;
        }
        
        return true;
    }
};