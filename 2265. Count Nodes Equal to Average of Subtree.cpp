#include"headers.h"

class Solution {
public:
     int averageOfSubtree(TreeNode* root) {
        int count = 0;
        parcurgere_numarare(root, count);
        return count;
    }

    void parcurgere_numarare(TreeNode* root, int& count)
    {
        if (root)
        {
            int nr_nod = 0;
            int sum = parcurgere_suma(root, nr_nod);
            if (nr_nod)
            {
                if (root->val == sum / nr_nod)
                    count++;
            }
            parcurgere_numarare(root->left, count);
            parcurgere_numarare(root->right, count);
        }
    }
    int parcurgere_suma(TreeNode* root, int& nr_nod)
    {
        if (root)
        {
            nr_nod++;
            return root->val + parcurgere_suma(root->left, nr_nod) + parcurgere_suma(root->right, nr_nod);
        }
        return 0;
    }
};