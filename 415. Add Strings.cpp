#include"headers.h"

class Solution {
public:
    
 string addStrings(string num1, string num2) {
	if (num1.size() > num2.size())
		swap(num1, num2);
	string result;
	int z = 0 , x = num1.size()-1 , y = num2.size() - 1 , exces = 0;
	while (x>-1)
	{	
		int a = num1[x--] - '0' + num2[y--] - '0' + exces;
		exces = (a > 9) ? 1 : 0;
		result.insert(0, 1,a % 10 + '0');
	}
	while (y>-1)
	{
		int a = num2[y--] - '0' + exces;
		exces = (a > 9) ? 1 : 0;
		result.insert(0,1, a % 10 + '0');
	}
	if (exces)
		result.insert(0,1, exces + '0');
	//reverse(result.begin(),result.end());
	return result;
	
}
};