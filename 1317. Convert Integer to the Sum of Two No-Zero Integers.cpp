#include"headers.h"

class Solution {
    bool nozero(int x)
    {
        while(x)
        {
            if(x%10==0)
                return false;
            x/=10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int i=1,j=n-1;
        while(nozero(i)==false || nozero(j)==false)
            {
                i++;
                j--;
            }
        return {i,j};
    }
};