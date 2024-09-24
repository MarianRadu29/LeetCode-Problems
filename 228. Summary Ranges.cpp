#include"headers.h"

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    if(nums.size()==0)
        return {};
    vector<string> result;
    int l = 0, r = 0;
    for (int i=1;i<nums.size();i++)
    {
        if (nums[r] + 1 == nums[i])
            r = i;
        else
        {
            if (l != r)
            {
                string aux;
                string numarString = to_string(nums[l]);
                aux.append(numarString);
                aux.append("->");
                numarString = to_string(nums[r]);
                aux.append(numarString);
                result.push_back(aux);
                l = i;
                r = i;
            }
            else
            {
                string aux;
                string numarString = to_string(nums[l]);
                aux.append(numarString);
                result.push_back(aux);
                l = i;
                r = i;
            }
        }
    }
    if (l == r)
    {   
        string aux;
        string numarString = to_string(nums[l]);
        aux.append(numarString);
        result.push_back(aux);
    }
    if (r == nums.size() - 1 && l < r)
    {
        string aux;
        string numarString = to_string(nums[l]);
        aux.append(numarString);
        aux.append("->");
        numarString = to_string(nums[r]);
        aux.append(numarString);
        result.push_back(aux);
    }
    return result;
}
};