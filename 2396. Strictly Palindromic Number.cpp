#include"headers.h"

class Solution {
    bool ispal(string s)
    {
        if(s.size()==0)
            return false;
        for(int i=0;i<s.size()/2;i++)
            if(s[i]!=s[s.size()-i-1])
                return false;
        return true;
    }
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<n-1;i++)
        {
            string aux;
            int nr = n;
            while(nr)
            {
                aux.append(1,'0' + nr%i);
                nr/=i;
            }
            if(ispal(aux)==false)
                return false;
        }
        return true;
    }
};