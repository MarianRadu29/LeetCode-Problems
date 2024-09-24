#include"headers.h"

class Solution {
public:
    int singleNumber(vector<int>& nums) {//trebuie singleNumber
    if (nums.size() == 1)
        return nums[0];
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 > nums.size()-1 && i+2>nums.size()-1)
            break;
        if (nums[i] == nums[i + 1] && nums[i+1] == nums[i+2] && nums[i+2]==nums[i])
            i+=2;
        else
            return nums[i];
    }
    return nums[nums.size() - 1];

}
};