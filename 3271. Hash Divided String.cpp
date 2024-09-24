#include"headers.h"

class Solution {
public:
    string stringHash(string s, int k) {
        int i=0;
        string result;
        for(;i<s.size();i+=k){
            int sum = 0;
            for(int j=i;j<i+k;j++){
                //cout<<s[j]<<' ';
                sum+=(s[j]-'a');
            }
            sum%=26;
            result+=char(sum+'a');
        }
        return result;
    }
};