#include"headers.h"

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m_map;
        set<int> result;
        int n = nums.size();
        for (int i : nums)
        {
            if (m_map.find(i) == m_map.end())
            {
                m_map[i] = 1;
                //cout << "[ " << i << ", " << m_map[i] << " ]\n";
                if (m_map[i] > (n / 3))
                    result.insert(i);
            }
            else
            {
                m_map[i]++;
                //cout << "[ " << i << ", " << m_map[i] << " ]\n";
                if (m_map[i] > (n / 3))
                    result.insert(i);
            }

        }
        /* for (int i : result)
            cout << i << ' ';
        cout << '\n'; */
        vector<int> result_vector;
        for (int i : result)
            result_vector.push_back(i);
        return result_vector;

    }
};