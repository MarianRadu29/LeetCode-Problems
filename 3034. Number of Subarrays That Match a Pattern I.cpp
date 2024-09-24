#include"headers.h"

class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
    int result = 0;
    for (int i = 0; i < nums.size() - pattern.size(); i++)
    {   
        bool sw = true;
        for (int k = i; k < i + pattern.size() && sw; k++)
        {
            switch(pattern[k-i])
            {
            case -1:
                if (nums[k] <= nums[k + 1])
                    sw = false;
                break;

            case 0:
                if (nums[k] != nums[k + 1])
                    sw = false;
                break;

            case 1:
                if (nums[k] >= nums[k + 1])
                    sw = false;
                break;
            }
        }
        if (sw)
            result++;
    }
    return result;
}
};