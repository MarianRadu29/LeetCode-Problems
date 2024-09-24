#include"headers.h"

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size()==1)
            return nums;
    for (int i = 0; i < nums.size()-2; i += 2)
    {
        for (int j = i + 2; j < nums.size(); j+=2)
        {
            if (nums[i] > nums[j])
                swap(nums[i], nums[j]);
        }
    }
    for (int i = 1; i < nums.size() - 1; i+=2)
    {
        for (int j = i + 2; j < nums.size(); j += 2)
        {
            if (nums[i] < nums[j])
                swap(nums[i], nums[j]);
        }
    }
    return nums;
}
};