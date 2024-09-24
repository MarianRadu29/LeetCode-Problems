#include"headers.h"

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int number = 0;
        for(int i : nums)
            number += i;
        
        int aux = ((nums.size())*(nums.size()-1))/2 + nums.size();
        return aux-number;
    }
};