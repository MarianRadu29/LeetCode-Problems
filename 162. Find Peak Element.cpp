#include"headers.h"

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[k]<nums[i])
                k=i;
        }
        return k;
    }
};