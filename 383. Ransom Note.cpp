#include"headers.h"

class Solution {
    unordered_map<char,int> hash_string(string s)
    {
        unordered_map<char,int> result;
        for(char c : s)
        {
         if (result.find(c) == result.end())
            {
                result.insert({ c,1 });   
            }
            else
            {
                result[c]++;
            }
        }

        return result;
    }
public:
    
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())
            return false;

        unordered_map<char, int> hash_ransomNote = hash_string(ransomNote);
        unordered_map<char, int> hash_magazine = hash_string(magazine);

        for (auto p : hash_ransomNote)
        {
            if (hash_magazine.find(p.first) == hash_magazine.end())
                return false;
            if (p.second > hash_magazine[p.first])
                return false;
        }
        return true;
    }
};