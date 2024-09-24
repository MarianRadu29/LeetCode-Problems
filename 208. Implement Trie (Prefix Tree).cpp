#include"headers.h"

class Trie {
    vector<string> list;
public:
    Trie() {}
    
    void insert(string word) {
        list.push_back(word);
    }

    bool search(string word) {
        for (string s : list)
            if (s == word)
                return true;
        return false;
    }

    bool startsWith(string prefix) {
        for (string s : list)
        {
            if (s.size() >= prefix.size())
                if (s.substr(0, prefix.size()) == prefix)
                    return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */