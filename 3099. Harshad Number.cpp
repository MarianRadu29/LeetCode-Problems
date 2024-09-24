class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s = 0 , aux = x;
        while(aux)
        {
            s+=aux%10;
            aux/=10;
        }
        if(x%s==0)
            return s;
        return -1;
    }
};