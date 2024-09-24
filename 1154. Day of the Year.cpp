#include"headers.h"

class Solution {
    bool estebisect(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    return true;
                else
                    return false; 
            } 
            else 
                return true;
        } 
        
        return false; 
    }
public:
    int dayOfYear(string data) {
        int an = stoi(data.substr(0,4));

        vector<int> nrday = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(estebisect(an))
            nrday[2]++;
        
        int luna = stoi(data.substr(5,2));
        int zi = stoi(data.substr(8,2));

        int sum = 0;
        for(int i=0;i<luna;i++)
            sum+=nrday[i];
        sum+=zi;
        return sum;
    }
};