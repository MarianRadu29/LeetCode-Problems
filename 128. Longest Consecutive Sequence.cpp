#include"headers.h"

class Solution {
public:
   int longestConsecutive(vector<int>& nums) {
    if (nums.size() < 2)
        return nums.size();
    set<int> s;
    for (int i : nums)
        s.insert(i);
    /*  for (int i : s)
         cout << i << ' ';
     cout << '\n'; */
    int nr = 1, max = 1;
    auto it_f = s.end();
    it_f--;
    for (auto it = s.begin(); it != it_f; it++)
    {
        if ((*it) + 1 == *(std::next(it)))
            nr++;
        else
        {
            if (nr > max)
                max = nr;
            nr = 1;
            
        }
         if(std::next(it)==it_f)
                {
                        if(nr>max)
                            max = nr;
                }
    }
    if (nr > 1 && max == 1)
        max = nr;

    return max;
}
};