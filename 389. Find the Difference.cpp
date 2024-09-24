#include"headers.h"

class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char ,int> m;
        for(char c : t)
            m[c]++;
        for(char c : s)
            m[c]--;
        char result ;
        for(auto it : m)
            if(it.second==1)
               result =  it.first;
        return result;
    }
};