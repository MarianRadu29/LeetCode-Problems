#include"headers.h"

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) 
    {
        if (root == nullptr)
        return nullptr;

        std::queue<Node*> q;
        q.push(root);

        while (!q.empty()) 
        {
            int levelSize = q.size();  
            for (int i = 0; i < levelSize; ++i)
            {
                Node* current = q.front();
                q.pop();
                current->next = i==levelSize-1?nullptr:q.front();

                if (current->left != nullptr)
                    q.push(current->left);
                if (current->right != nullptr)
                    q.push(current->right);
            }
        }
        return root;
    }
};