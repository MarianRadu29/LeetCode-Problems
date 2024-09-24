#include"headers.h"

class Solution {
public:
    int commonFactors(int a, int b) {
        if(a>b)
            swap(a,b);
        int count = 0;
        for(size_t i=1;i<=a;i++)
            if(a%i==0 && b%i==0)
                count++;
        return count;
    }
};