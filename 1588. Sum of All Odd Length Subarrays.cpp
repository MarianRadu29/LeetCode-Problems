#include"headers.h"

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i=1;i<=arr.size();i+=2)
        {
            for(int j=0;j<=arr.size()-i;j++)
            {
                for(int k=j;k<i+j;k++)
                    {
                        sum+=arr[k];
                        cout<<arr[k]<<' ';
                    }
                cout<<'\n';
            }
        }
        return sum;
    }
};