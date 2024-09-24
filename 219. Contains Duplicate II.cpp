#include"headers.h"

class Solution {
public:  
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        m.insert({ nums[0],0 });
        for (int i = 1; i < nums.size(); i++)
        {
            if (m.find(nums[i]) != m.end())
            {
                int nr = i -  m.find(nums[i])->second;
                if (nr <= k)
                    return true;
                m[nums[i]] = i;
            }
            else
                m.insert({ nums[i],i });
        }
        return false;
    }
};