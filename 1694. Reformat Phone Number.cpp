#include"headers.h"

class Solution {
public:
    string reformatNumber(string number) {

    int i = 0;
    while(i<number.length())
    {
        if(number[i]==' ' || number[i]=='-')
        {
            number.erase(i,1);
            i-=1;
        }
        i++;
    }
    string result = "";
    while(number.length()>=3)
    {
        if (number.length()==4)
        {
            result+=number.substr(0,2);
            result+='-';
            result+=number.substr(2,2);
            number="";
        }
        else
        {
            result+=number.substr(0,3);
            number = number.substr(3);
            if(number.length()>=2)
                result+='-';
        }
    }
    if(number.length()==2)
    {
        result+=number;
    }
    return  result;

}
};