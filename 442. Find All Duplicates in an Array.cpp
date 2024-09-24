#include"headers.h"

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<int> result;
        for (int i : nums)
        {
            if (umap.find(i) == umap.end())
                umap[i] = 1;
            else
            {
                umap[i] ++;
                if (umap[i] == 2)
                    result.push_back(i);
            }
        }
        return result;
    }
};