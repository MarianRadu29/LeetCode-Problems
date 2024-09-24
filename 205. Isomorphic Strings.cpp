#include"headers.h"

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> umap;
        for (int i = 0; i < s.size(); i++)
        {
            if (umap.find(s[i]) == umap.end())
            {
                for (auto p : umap)
                    if (p.second == t[i])
                        return false;
                umap.insert({ s[i],t[i]});
            }
            else
            {
                if (umap[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};