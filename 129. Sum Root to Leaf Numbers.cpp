#include"headers.h"

class Solution {
public:
    int sumNumbers(TreeNode* root) 
    {
        vector<int>a;
        vector<vector<int>> paths;
        generatePaths(root,a,paths);
        int sum = 0;
        for(vector<int> v : paths)
        {
            int k=0;
            for(int i : v)
            {
                k=k*10+i;
            }
            sum+=k;
        }
        return sum;
    }
    void generatePaths(TreeNode* root, std::vector<int>& path, std::vector<std::vector<int>>& paths) ///!!!!!!!!!!!!!!!!!!!!!!!!!
    {
        if (!root) return;

        path.push_back(root->val);

        if (!root->left && !root->right) {
            paths.push_back(path);
        }
        else {
            generatePaths(root->left, path, paths);
            generatePaths(root->right, path, paths);
        }

        path.pop_back();
    }
};