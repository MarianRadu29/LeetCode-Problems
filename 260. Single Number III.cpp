#include"headers.h"

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m_map;
        for (int i : nums)
        {
            if (m_map.find(i) == m_map.end())
                m_map[i] = 1;
            else
                m_map[i]++;
        }
        vector<int> result;
        for (auto p : m_map)
        {
            if (p.second == 1)
                result.push_back(p.first);
        }
        return result;
    }
};