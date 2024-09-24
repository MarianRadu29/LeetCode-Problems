class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)
            return 1;
        
        int l = 1, r = n , suml = 0 , sumr = 0;
        while(l<r)
        {
            if(suml<=sumr)
                suml+=l++;
            else
                sumr+=r--;
        }
        if(suml==sumr)
            return l;
        return -1;

    }
};