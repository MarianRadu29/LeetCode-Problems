#include"headers.h"

class Solution {
public:
   string reorderSpaces(string text) {
        vector<string> s;
        int count = 0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]==' ')
                {   
                    count++;
                }
            else
            {   string aux;
                while(text[i]!=' ' && i<text.size())
                    {
                        aux.append(1,text[i]);
                        i++;
                    }
                s.push_back(aux);
                if(i<text.size())
                    count++;
            }
            
        }
        string result;
        if(s.size()>1)
        {
        int extra = count%(s.size()-1);
        count = count/(s.size()-1);
  
        for(int i=0;i<s.size()-1;i++)
        {
            result = result + s[i];
            for(int j=0;j<count;j++)
                result.append(1,' ');
            
        }
        result = result + s[s.size()-1];
        if(extra>0)
            for(int j=0;j<extra;j++)
                result.append(1,' ');
        }
        else{
            result = result + s[0];
            for(int j=0;j<count;j++)
                result.append(1,' ');
        }
        return result;
    }
};