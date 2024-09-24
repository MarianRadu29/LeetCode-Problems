#include"headers.h"


class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    long int c = 1;
    while(c<left) c*=2;
    if(c==left && c*2>right)
        return left;
    if(c*2<right)
        return 0;
    int aand = left;
    
    //cout<<left<<'\n';
    for (long int i = left; i <= right && aand>0; i++)
    {
       // cout << i << '\n';
        aand = i & aand;
    }
    return aand;
}
};