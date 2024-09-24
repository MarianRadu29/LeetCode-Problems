#include"headers.h"

class Solution {
public:
   int matrixSum(vector<vector<int>>& nums) {
        int score = 0;
        for (int i = 0; i < nums.size(); i++)
            sort(nums[i].begin(), nums[i].end(), [](int x,int y) {
            return x > y;
                });

    
        
        for (int i = 0; i < nums[0].size(); i++)//coloane
        {   
            int maxx = -1;
            for (int j = 0; j < nums.size(); j++)
            {
                if (maxx < nums[j][i])
                    maxx = nums[j][i];
            }
            cout<<maxx<<'\n';
            score += maxx;
        }
        
        return score;


    }
};