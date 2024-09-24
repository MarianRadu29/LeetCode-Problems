#include"headers.h"

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i;
        for(i=1;i<nums.size();i++)
            if(nums[i]<nums[i-1])
                break;
        if(i==nums.size())
            return nums[0];
        return nums[i];
    }
};