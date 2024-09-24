#include"headers.h"

class MyStack {
    queue<int> a , b;
    int number;
public:
    MyStack() {
        number = 0;
    }

    void push(int x) {
        if(number==0){
            number++;
            a.push(x);
        }
        else
        {
            number++;
            a.push(x);
        }
    }

    int pop() {
        int i = 0;
        while (i<number-1)
        {
            int x = a.front();
            a.pop();
            b.push(x);
            i++;
        }
        int result = a.front();
        a.pop();
        number--;
        for (i=0;i<number;i++)
        {
            int x = b.front();
            b.pop();
            a.push(x);
        }
        return result;
    }

    int top() {
        return a.back();
    }

    bool empty() {
        return a.empty()==true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */