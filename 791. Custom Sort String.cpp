#include"headers.h"

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> m_order;
        int index = 0;
        for (char c : order)
            m_order[c] = index++;


        for(int i=0;i<s.size()-1;i++)
            for (int j = i + 1; j < s.size(); j++)
            {   
                if (m_order.find(s[i]) != m_order.end() && m_order.find(s[j]) != m_order.end())
                {
                    if (m_order[s[i]] > m_order[s[j]])
                        swap(s[i], s[j]);
                }
                else
                    if (m_order.find(s[i]) == m_order.end() && m_order.find(s[i]) != m_order.end())
                        swap(s[i], s[j]);
            }

        return s;
    }
};