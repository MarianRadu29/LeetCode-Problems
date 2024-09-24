#include"headers.h"

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if (k == 0)
            return;
        vector<int> aux(nums.end() - k, nums.end());
        
        for (int i = nums.size() - k-1; i >= 0; i--)
            nums[i + k ] = nums[i];
        for (int i = 0; i < k; i++)
            nums[i] = aux[i];

    }
};