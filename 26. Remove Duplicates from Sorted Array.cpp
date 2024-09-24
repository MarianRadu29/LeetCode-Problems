#include"headers.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i-1] == nums[i])
        {
            for (int j = i; j < n-1; j++)
                nums[j] = nums[j + 1];
            n--;
            i--;
        }
               
    }
    return n;
}
};