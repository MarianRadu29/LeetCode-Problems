#include"headers.h"

class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<pair<int, int>, string>> v;

        string w;
        int n = text.size(), cnt = 0;
        for(int i=0; i<n; i++) {
            if(text[i] == ' ') {
                w[0] = tolower(w[0]);
                v.push_back({{cnt, i}, w});
                w = "";
                cnt = 0;
            }
            else {
                w += text[i];
                cnt++;
            }
        }
        v.push_back({{cnt, n}, w});
        sort(v.begin(), v.end());

        string ans;
        for(auto i : v) {
            ans += i.second + " ";
        }
        ans[0] = toupper(ans[0]);
        ans.pop_back();

        return ans;
    }
};