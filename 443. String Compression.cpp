#include"headers.h"

class Solution {
public:
    int compress(vector<char>& chars) {
        string result;
        char current = chars[0];
        int count = 1;
        for(int i=1;i<chars.size();i++)
        {
            if(current==chars[i])
                count++;
            else
            {
                result +=current;
                if(count>1)
                    result+=to_string(count);
                count = 1;
                current=chars[i];
            }
        }
        result+=current;
        if(count>1)
            result+=to_string(count);
        cout<<result<<endl;
        chars.clear();
        for(int i=0;i<result.size();i++)
        {
            chars.push_back(result[i]);
        }
        return result.size();
    }
};