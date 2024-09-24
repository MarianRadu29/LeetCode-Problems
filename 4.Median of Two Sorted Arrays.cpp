#include"headers.h"

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> array = nums1;
        for(int i : nums2)
            array.push_back(i);
        sort(array.begin() , array.end());
        if(array.size()%2==1)
            return (double)array[array.size()/2];
        else
            return (array[array.size()/2]+array[array.size()/2-1])/2.0;
    }
};