#include"headers.h"

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int nr = 0;
        for(char c : s)
            if(c=='1')
                nr++;
        string result;
        for(int i=0;i<nr-1;i++)
            result.append(1,'1');
        for(int i=0;i<s.size()-nr;i++)
            result.append(1,'0');
        result.append(1,'1');
        return result;

    }

};