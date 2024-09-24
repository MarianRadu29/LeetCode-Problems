#include"headers.h"

class Solution {
public:
    void generate_permutations(vector<vector<int>> &r_p,vector<int> aux,vector<bool> viz,int size,int current)
    {
        if (current == size)
        {
            r_p.push_back(aux);
            return;
        }

        for (int i = 0; i < viz.size(); i++)
        {
            if (viz[i]==false)
            {
                aux.push_back(i);
                viz[i] = true;
                generate_permutations(r_p, aux, viz, size, current + 1);
                viz[i] = false;
                aux.pop_back();
            }
        }

    }   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result_permutations;
        int size = nums.size();
        vector<bool> viz(size,false);
        vector<int> aux;
        generate_permutations(result_permutations, aux, viz, size, 0);
        vector<vector<int>> result_final;
        for (vector<int> a : result_permutations)
        {   
            vector<int> aux1;
            for (int i : a)
            {
                //cout << i << ' ';
                aux1.push_back(nums[i]);
            }
            //cout << '\n';
            if (find(result_final.begin(),result_final.end(),aux1)==result_final.end())
                result_final.push_back(aux1);
        }
        return result_final;
    }
};