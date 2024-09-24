#include"headers.h"

class CustomStack {
    vector<int> st;
    int capacity;
public:
    CustomStack(int maxSize){
        this->capacity = maxSize;
    }

    void push(int x) {
        if(st.size()==capacity){
            return;
        }

        st.push_back(x);
    }

    int pop() {
        if(st.size()==0){
            return -1;
        }
        int result = st[st.size()-1];
        st.pop_back();
        return result;
    }

    void increment(int k, int val) {
        for(int i=0;i<st.size() && i<k;i++){
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */