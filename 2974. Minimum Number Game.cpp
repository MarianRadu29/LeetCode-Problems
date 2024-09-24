#include"headers.h"

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> a;
        vector<int> b;
        for(int i=0;i<nums.size();i++)
            if(i%2==0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        vector<int> result;
        for(int i=0;i<nums.size()/2;i++)
        {
            result.push_back(b[i]);
            result.push_back(a[i]);
        }
        return result;
    }
};