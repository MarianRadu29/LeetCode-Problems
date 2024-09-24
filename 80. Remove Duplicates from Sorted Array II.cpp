#include"headers.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
        {   
            i++;
                while (i<nums.size() && nums[i - 1] == nums[i])
                {
                    nums.erase(nums.begin() + i);
                }
        }

    }
    return nums.size();
}
};