#include"headers.h"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    if(target>nums[nums.size()-1])
        return nums.size();
    if(target<nums[0])
        return 0;
    if(nums.size()==1)
        return 0;
    int l = 0, r = nums.size()-1;
    int mid;
    while (l <= r)
    {
        mid = l+(r-l) / 2;
        if (nums[mid] == target)
            return mid;
        else
            if (nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
    }
    return max(l,mid);
}
};