#include"headers.h"

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            int aux = i,count = 0;
            while(aux)
            {
                count+=aux%2;
                aux/=2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};