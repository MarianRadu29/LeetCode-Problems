#include"headers.h"

class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0)
            if((num[i]-'0')%2==0)
                i--;
            else
                break;
        if(i==-1)
            return "";
        return num.substr(0,i+1);
    }
};