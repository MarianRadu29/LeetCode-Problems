#include"headers.h"

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.size()<str2.size())
            swap(str1,str2);
        int n1 = str1.size();
        int n2 = str2.size();
        int gcd = cmmdc(n1,n2);
        string result;
        int count = 0;
        for(;count<str1.size();count+=gcd){
            cout<<str1.substr(count,gcd)<<'\n';
            if(str1.substr(count,gcd)==str2.substr(0,gcd))
                result = str1.substr(0,gcd);
            else
                {
                    result= "";
                    break;
                }
        }
        if(result!="")
            {   count = 0;
                for(;count<str2.size();count+=gcd)
                {
                    if(str1.substr(0,gcd)==str2.substr(count,gcd))
                result = str1.substr(0,gcd);
            else
                {
                    result= "";
                    break;
                }
            }
            }
        return result;
        
    }
    int cmmdc(int x,int y)
    {
        while(x!=y)
        {
            if (x>y)
                x-=y;
            else
                y-=x;
        }
        return x;
    }
};