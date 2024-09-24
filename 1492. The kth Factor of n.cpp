#include"headers.h"

class Solution {
public:
    int kthFactor(int n, int k) {
        int i = 1;
        vector<int> factor;
        while(i<=n/2)
        {
            if(n%i==0)
                factor.push_back(i);
            i++;
        }
        factor.push_back(n);
        if(factor.size()<k)
            return -1;
        return factor[k-1];

    }
};