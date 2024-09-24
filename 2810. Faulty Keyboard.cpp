#include"headers.h"

class Solution {
public:
    string finalString(string s) {
    string result;
    for(char c: s){
        if(c=='i'){
            std::reverse(result.begin(), result.end());
        }
        else{
            result+=c;
        }
    }
    return result;
}
};