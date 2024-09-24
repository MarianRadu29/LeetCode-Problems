#include"headers.h"

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> poz;
        vector<int> neg;
        for(int x:nums){
            if(x>=0){
                poz.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }
        vector<int> result;
        int n = nums.size()/2;
        for(int i=0;i<n;i++){
            result.push_back(poz[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};