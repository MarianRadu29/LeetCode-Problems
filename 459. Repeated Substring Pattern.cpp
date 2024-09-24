#include"headers.h"

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()==1)
                return false;
        for(int i=1;i<=s.size()/2;i++)
        {
            string aux(s.substr(0,i));
            string copy = s;
            while(copy.size()>0)
            {   
                if(copy.substr(0,i)==aux)
                    copy.erase(0,i);
                else
                    break;
            }
            if(copy=="")
                return true;
        }
        return false;
    }
};