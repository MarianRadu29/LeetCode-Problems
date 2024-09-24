#include"headers.h"

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string sub=word;
        int count=0;
        while(sequence.find(sub)!=string::npos){
            count++;
            sub+=word;
        }
        return count;
    }
};