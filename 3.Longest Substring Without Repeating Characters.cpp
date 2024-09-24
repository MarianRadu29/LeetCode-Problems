#include"headers.h"

class Solution {
public:
   int lengthOfLongestSubstring(string s)
{
    int maxx = -1;
    if (s.length() == 0)
        return 0;
    for (int i = 0; i < s.length(); i++)
    {
        std::unordered_map<char, int> umap;
        int j = i,count = 0;
        while (j<s.length())
        {   
            if (umap.find(s[j]) == umap.end())
            {
                umap.insert({ s[j],j });
                count++;
                j++;
            }
            else
                break;
        }
        if (count > maxx)
            maxx = count;
    }
    return maxx;
}
};