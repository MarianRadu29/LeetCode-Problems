#include"headers.h"

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int result = 0;
        for(int i : nums)
            if(i<k)
                result++;
        return result;

    }
};