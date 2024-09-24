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
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr) return true;
    
        queue<TreeNode*> q; 
        int height = 0;
        bool ok = true;
        q.push(root);

        // Parcurgerea BFS
        while (!q.empty()) {
            int levelSize = q.size(); 

            vector<int> v;
        
            for (int i = 0; i < levelSize; i++) {
                TreeNode* currentNode = q.front();
                q.pop();

                v.push_back(currentNode->val);
            
                if (currentNode->left) q.push(currentNode->left);
                if (currentNode->right) q.push(currentNode->right);
            }
            /* cout<<height<<'\n';
            cout<<"Vector: ";
            for(int i: v)
                cout<<i<<' ';
            cout<<'\n'; */
            if (height % 2==1)
            {   
                if(v.size()==1)
                    {
                        if(v[0]%2==1)
                            return false;
                    }
                else
                    for (int i = 0; i < v.size() - 1; i++)
                        if (v[i] <= v[i + 1] || v[i]%2==1 || v[i+1]%2==1)
                            return false;
            }
            else
            {   
                //cout<<"da\n";
                if(v.size()==1)
                    {
                        if(v[0]%2==0)
                            return false;
                    }
                else
                    for (int i = 0; i < v.size() - 1; i++)
                        if (v[i] >= v[i + 1] || v[i] % 2 == 0 || v[i + 1] % 2 == 0)
                            return false;
            }
            height++;
        
        }
        return true;

    }
};