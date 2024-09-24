#include"headers.h"

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m,vector<int>(n,-1));
        int i=0,j=0;
        int l=0,r=0,d=0,u=0;
        ListNode *t=head;
        while(t!=nullptr){
            if(t!=nullptr){
                while(t and j<n and i<m and i>=0 and j>=0){
                    if(v[i][j]!=-1)
                        break;
                    v[i][j++]=t->val;
                    t=t->next;
                }
                j--;
                i++;
            }
            if(t){
                while(t and j<n and i<m and i>=0 and j>=0){
                    if(v[i][j]!=-1)
                        break;
                    v[i++][j]=t->val;
                    t=t->next;
                }
                i--;
                j--;
            }
            if(t){
                while(t and j<n and i<m and i>=0 and j>=0){
                    if(v[i][j]!=-1)
                        break;
                    v[i][j--]=t->val;
                    t=t->next;
                }
                j++;
                i--;
            }
            if(t){
                while(t and j<n and i<m and i>=0 and j>=0){
                    if(v[i][j]!=-1)
                        break;
                    v[i--][j]=t->val;
                    t=t->next;
                }
                j++;
                i++;
            }
        }
        return v;
    }
};