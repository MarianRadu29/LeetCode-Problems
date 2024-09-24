#include"headers.h"

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
    if(root==nullptr)
        return {};
    queue<Node*> q;
    q.push(root);
    vector<vector<int>> result;
    while(!q.empty())
    {
        int level_size = (int)q.size();
        vector<int> aux;
        for(int i=0;i<level_size;i++)
        {
            Node* current = q.front();
            q.pop();
            aux.push_back(current->val);
            int n = current->children.size();
            for(int j=0;j<n;j++)
                q.push(current->children[j]);
        }
        result.push_back(aux);
    }
    return result;
}
};