#include"headers.h"

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1)
            return s;
        int max = -1;
        int begin,end;
        for(int i=0;i<s.size();i++)
        {
            for(int j=s.size()-1;j>=i;j--){
                int a = i;
                int b = j;
                while(b>=a)
                    {
                        if(s[a]!=s[b])
                            break;
                        a++;
                        b--;
                    }
                if(a>b)
                    if(max<j-i+1)
                        {
                            max = j-i+1;
                            begin = i;
                            end = j;
                        }
            }
        }

        return s.substr(begin,max);
    }
};