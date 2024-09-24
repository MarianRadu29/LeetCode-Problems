#include"headers.h"

class Solution {
public:
    string reversePrefix(string word, char ch) {
        if (word.find(ch) == -1)
            return word;

        string substr = word.substr(0,word.find_first_of(ch)+1);
        reverse(substr.begin(), substr.end());
        substr = substr + word.substr(word.find(ch)+1);
        return substr;
    }
};