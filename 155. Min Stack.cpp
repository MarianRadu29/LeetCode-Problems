#include"headers.h"

class MinStack {
     stack<pair<int, int>,vector<pair<int,int>>> s;
public:
    MinStack() {
    }

    void push(int val) {
        if(s.empty()==false)
            s.push({ val , min(s.top().second,val) });
        else
            s.push({val,val});
    }

    void pop() {
        if(s.empty()==false)
            s.pop();
    }

    int top() {
            return s.top().first;
    }

    int getMin() {
            return s.top().second;
    }
};