#include"headers.h"
class Solution {
public:
    string Add(string x, string y)
    {

        if (x.size() > y.size())
            swap(x, y);
        string result;
        int  xx = x.size() - 1, yy = y.size() - 1, exces = 0;
        while (xx > -1)
        {
            int a = x[xx--] - '0' + y[yy--] - '0' + exces;
            exces = (a > 9) ? 1 : 0;
            result.append(1, a % 10 + '0');
        }
        while (yy > -1)
        {
            int a = y[yy--] - '0' + exces;
            exces = (a > 9) ? 1 : 0;
            result.append(1, a % 10 + '0');
        }
        if (exces)
            result.append(1, exces + '0');

        reverse(result.begin(), result.end());
        return result;

    }
    string multiply(string num1, string num2) {
        if(num2.size()==1 && num2[0]=='0')
            return num2;
        if(num1.size()==1 && num1[0]=='0')
            return num1;
        if (num1.size() < num2.size())
            swap(num1, num2);
        string result;
        vector<string> aux;
        for (int i = num2.size() - 1; i >= 0; i--)
        {
            string v;
            int carry = 0;
            for (int j = num1.size() - 1; j >= 0; j--)
            {
                int number = (num2[i] - '0') * (num1[j] - '0')+carry;
                v.insert(0, 1, number % 10 + '0');
                carry = number / 10;
            }
            if(carry>0)
                v.insert(0, 1, carry + '0');
            //cout << v << '\n';
            aux.push_back(v);
                
        }

    //123 456
    //inmutirea lor (scolareasca)
    //      738
    //     615
    //    492
    for (int i = 0; i < aux.size();i++)
    {
        for (int j = 0; j < i; j++)
            aux[i].append(1, '0');
    }
    result = "0";
    for (int i = 0; i < aux.size(); i++)
    {
        result = Add(result, aux[i]);
    }

    
   return result;
}
};