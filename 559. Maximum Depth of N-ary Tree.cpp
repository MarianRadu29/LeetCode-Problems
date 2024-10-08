#include"headers.h"

class Solution {
public:
    int maxDepth(Node* root)
    {
        if(root == NULL) return 0;

        int n = root->children.size(); 
        if(n == 0) return 1;

        vector<int> arr(n);

        for(int i = 0; i < n; ++i)
        {
            arr[i] = maxDepth(root->children[i]);
        }

        int m_depth = 1 + *max_element(arr.begin(), arr.end());

        return m_depth;
    }
};