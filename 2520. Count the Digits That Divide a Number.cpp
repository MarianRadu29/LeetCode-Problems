class Solution {
public:
    int countDigits(int num) {
        int aux = num , count= 0;
        while(aux)
        {
            if(num%(aux%10)==0)
                count++;
            aux/=10;
        }
        return count;
    }
};