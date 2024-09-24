#include"headers.h"

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word[0] >= 'a' && word[0] <= 'z')
        {
            size_t i = 1;
            while (i < word.size())
                {
                    if (word[i] >= 'A' && word[i] <= 'Z')
                        return false;
                    i++;
                }
        }
        else
            if (word.size() > 1)
            {
                if (word[1] >= 'a' and word[1] <= 'z')
                {
                    size_t i = 2;
                    while (i < word.size())
                        {   
                            if (word[i] >= 'A' && word[i] <= 'Z')
                                return false;
                            i++;
                        }
                }
                else
                {
                    size_t i = 2;
                    while (i < word.size())
                        {  
                            if (word[i] >= 'a' && word[i] <= 'z')
                                return false;
                            i++;
                        }
                }
            }
            
            return true;
    }
};