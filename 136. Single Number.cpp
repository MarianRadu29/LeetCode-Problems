#include"headers.h"

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    if (nums.size() == 1)
        return nums[0];
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {   
        if (i + 1 == nums.size())
            break;
        if (nums[i] == nums[i + 1])
            i++;
        else
            return nums[i];
    }
    return nums[nums.size() - 1];
}
};