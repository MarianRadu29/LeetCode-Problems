#include"headers.h"

class Solution {
public:
    void generate_combination_sum(vector<vector<int>>& v,vector<int> &candidates, vector<int> a, int target)
    {   
        if (target < 0)
            return;
        if (target == 0)
        {   
            sort(a.begin(),a.end());
            if (find(v.begin(),v.end(),a)==v.end())
                v.push_back(a);
            return;
        }
        for (size_t i = 0; i < candidates.size(); i++)
        {
            a.push_back(candidates[i]);
            generate_combination_sum(v, candidates, a, target - candidates[i]);
            a.pop_back();
        }

    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        //vector<int> aux;
        generate_combination_sum(result, candidates, {}, target);
        return result;

    }
};