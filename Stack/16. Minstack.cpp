#include <bits/stdc++.h>
using namespace std;



class MinStack {
public:
    stack<int> minstack;
    stack<int> stk;
    int mini = INT_MAX;
    MinStack() {
    
    }
    void prinStack(){
    
    }
    
    void push(int val) {
        this->stk.push(val);
        if(this->mini >= val){ mini = val;
                this->minstack.push(mini);}
    }
    
    void pop() {
        if(this->stk.top() == this->minstack.top()){
        cout<<endl;
            this->stk.pop();
            this->minstack.pop();
            if(!minstack.empty()){this->mini = this->minstack.top();}
            else this->mini = INT_MAX;
            
    }else{
    cout<<endl;
    
        this->stk.pop();}
        
    }
    
    int top() {
        return this->stk.top();
    }
    
    int getMin() {
        return this->minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 int main(){
 MinStack minStack ;
minStack.push(2);
minStack.push(0);
minStack.push(3);

minStack.push(0);
cout<<minStack.getMin();
minStack.pop();
cout<<minStack.getMin();
minStack.pop();
cout<<minStack.getMin();
minStack.pop();
cout<<minStack.getMin();
 }