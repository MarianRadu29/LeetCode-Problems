#include"headers.h"

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1)
            if(target==nums[0])
                return {0,0};
            else
                return {-1,-1};

        int l = 0 , r = nums.size()-1;
        while(l<=r)
        {   
            int mid = (r+l)/2;
            if(nums[mid]>target)
                r = mid-1;
            if(nums[mid]<target)
                l = mid+1;
            if(nums[mid]==target)
            {   
                //cout<<mid<<'\n';
                int i,j;
                i=mid-1;
                j=mid+1;
                while(i>=0 && j<nums.size())
                {   
                    if(nums[i]!=target && nums[j]!=target)
                            break;
                    if(nums[i]==target)
                            i--;
                    
                    if(nums[j]==target)
                            j++;
                    

                }
                while(i>=0)
                {
                    if(nums[i]==target)
                            i--;
                    else
                        break;
                }
                while(j<nums.size())
                {
                    if(nums[j]==target)
                            j++;
                    else
                        break;
                }
                if(i==mid-1 && j==mid+1)
                    return{mid,mid};
                else
                    if(i==mid-1 && j!=mid+1)
                        return{mid,j-1};
                    else
                        if(i!=mid-1 && j==mid+1)
                            return{i+1,mid};
                return {i+1,j-1};
            }
        }
        return {-1,-1};
    }
};