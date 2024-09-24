#include"headers.h"

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==1 && nums[0] <= 0)
            return 1;
        sort(nums.begin(),nums.end());
        std::vector<int>::iterator last = std::unique(nums.begin(), nums.end());//index catre prima valoare din lista care contine duplicate,daca exista

        nums.erase(last, nums.end());
        int i=0;
        while( i<nums.size()&& nums[i]<=0 )
            i++;
        
        int count = i;
        if(i==nums.size())
            return 1;
        if(nums[i]!=1)
            return 1;

        while(i<nums.size()-1)
        {
            if(nums[i]+1!=nums[i+1])
                return nums[i]+1;
            i++;
        }
        
        if(nums[count]==1)
            return nums[nums.size()-1]+1;
        return nums[count]-1;
    }
};