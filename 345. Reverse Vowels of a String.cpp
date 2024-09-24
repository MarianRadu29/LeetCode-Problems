#include"headers.h"

class Solution {
    bool isvowel(char c)
    {
        switch(c)
        {
            case 'a':
                return true;
            case 'e':
                return true;
            case 'i':
                return true;
            case 'o':
                return true;
            case 'u':
                return true;
            case 'A':
                return true;
            case 'E':
                return true;
            case 'I':
                return true;
            case 'O':
                return true;
            case 'U':
                return true;
            default:
                return false;
        }
    }
public:
    string reverseVowels(string s) {
        int l=0 , r = s.size()-1;
        while(l<r)
        {
            if(isvowel(s[l])==true)
                {
                    while(isvowel(s[r])==false)
                        r--;
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
            else
            {   
                if(isvowel(s[r])==true)
                    {while(isvowel(s[l])==false)
                        l++;
                    swap(s[l],s[r]);
                    r--;
                    l++;}
                else
                {
                    l++;
                    r--;
                }
            }
        }

        return s;

        }
};