#include"headers.h"

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int> operands;

    for (auto token : tokens) {
        if (isOperator(token)==true)// Este operator
        {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result;
            if (token == "+") {
                result = operand1 + operand2;
            } else if (token == "-") {
                result = operand1 - operand2;
            } else if (token == "*") {
                result = operand1 * operand2;
            } else if (token == "/") {
                if(operand2==0)
                        return -1;
                result = operand1 / operand2;
            }
            
            operands.push(result);
        }
        else // Este operand
        {
            int operand = stoi(token);//converteste din string in int 
            operands.push(operand);
        }
    }

    return operands.top();
}

    bool isOperator(string c) {return c == "+" || c == "-" || c == "*" || c == "/";}


};