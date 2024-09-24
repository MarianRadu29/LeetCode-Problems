#include"headers.h"

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0 , sum_digit = 0;
        for(int i : nums)
        {
            sum+=i;
            while(i)
            {
                sum_digit+=i%10;
                i/=10;
            }
        }
        return abs(sum-sum_digit);
        
    }
};