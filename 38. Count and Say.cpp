#include"headers.h"

class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string s = "1";
        for(int i=1;i<n;i++)
        {   
            cout<<s<<'\n';
            s = function(s);
        }
        return s;
    }
    string function(string s)
    {
        string result;
        for(int i=0;i<s.size();i++)
        {
            char c = s[i];
            if(i+1<s.size())
            {
                int count = 1;
                while(s[i+1]==c && i+1<s.size())
                    {
                        i++;
                        count++;
                    }
                result.append(1,'0'+count);
                result.append(1,c);
            }
            else
            {
                result.append(1,'1');
                result.append(1,c);
            }
        }
        return result;

    }
};