#include"headers.h"

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        int result;
        for(int i : nums)
        {
            if(umap.find(i)==umap.end())
                umap.insert({i,1});
            else
                {
                    result = i;
                    break;
                }
        }
        return result;
    }
};