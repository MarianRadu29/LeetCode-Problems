#include"headers.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
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
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(nullptr == root)
            return { ""};
        if(root && root->left==nullptr && root->right==nullptr)
            return{to_string(root->val)};
        vector<vector<int>> result;
        vector<int> curent;

        generatePaths(root,curent,result);
       
        for(vector<int> v : result)
        {
            for(int k : v)
                cout<<k<<' ';
            cout<<'\n';
        }

        vector<string> paths;
        for(vector<int> v : result )
        {   
            string aux;
            if(v.size()==1)
            {   string a = to_string(v[0]);
                aux += a;
            }
            else
            {
                string a = to_string(v[0]);
                aux += a;
                for(int k=1;k<v.size();k++)
                {
                    aux +="->";
                    a = to_string(v[k]);
                    aux+=a;
                }
              //  aux+= to_string(v[v.size()-1]);
            }
            paths.push_back(aux);
        }
        return paths;
    }
};