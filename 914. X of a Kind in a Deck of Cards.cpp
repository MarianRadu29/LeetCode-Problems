#include"headers.h"

class Solution {
    int cmmdc(int x , int y)
    {
        while(x!=y)
            if(x>y)
                x-=y;
            else
                y-=x;
        return x;
    }
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1)
            return false;
        map<int,int> map;
        for(int i: deck)
            map[i]++;
        int ok = map.begin()->second;
        for(auto it : map)
        {
            //cout<<it.second<<' ';
            if(cmmdc(it.second,ok)==1)
                return false;
            ok = cmmdc(it.second,ok);
        }
        return true;
    }
};