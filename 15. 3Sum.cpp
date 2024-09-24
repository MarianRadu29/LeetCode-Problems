#include"headers.h"


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    if (nums.size() < 3)
        return {};
    if (nums.size() == 3)
        if (nums[0] + nums[1] + nums[2] == 0)
            return { {nums[0] , nums[1] , nums[2]} };
        else
            return {};
    bool allEqual = std::all_of(nums.begin(), nums.end(), [](int num) { return num == 0; });

    if(allEqual){
        return {{0,0,0}};
    }

    set<multiset<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int left = 0, right = nums.size() - 1;
        //  cout << "    i=" << i << '\n';
        while (left < right)
        {
            if (left == i)
            {
                left++;
                continue;
            }
            if (right == i)
            {
                right--;
                continue;
            }

            if (nums[i] + nums[left] + nums[right] > 0)
            {
                right--;
                continue;
            }
            if (nums[i] + nums[left] + nums[right] < 0)
            {
                left++;
                continue;
            }
            if (nums[i] + nums[left] + nums[right] == 0)
            {
               // cout << "l=" << left << '\t' << "r=" << right << '\n';
                multiset<int> aux = { nums[i],nums[left],nums[right] };
               // for (int i : aux)
                 //   cout << i << ' ';
                //cout << '\n';
                result.insert(aux);
                left++;
            }
        }
    }
    vector<vector<int>> Result;
    for (multiset<int> i : result)
    {   
        vector<int> aaa;
        for (int j : i)
        {
            aaa.push_back(j);
        }
        Result.push_back(aaa);
    }
    return Result;
}
};