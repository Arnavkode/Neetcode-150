// Postfix to Infix problem

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(string s: tokens){
            if(s == "*"){
                int num1 = stk.top();
                stk.pop();
                int num2 = stk.top();
                stk.pop();
                stk.push(num2*num1);
            }
            else if(s == "-"){
                int num1 = stk.top();
                stk.pop();
                int num2 = stk.top();
                stk.pop();
                stk.push(num2-num1);
            }
            else  if(s == "+"){
                int num1 = stk.top();
                stk.pop();
                int num2 = stk.top();
                stk.pop();
                stk.push(num2+num1);
                
            }else if(s == "/"){
                int num1 = stk.top();
                stk.pop();
                int num2 = stk.top();
                stk.pop();
                stk.push(num2/num1);
                
            }
            else{
                int num = stoi(s);
            stk.push(num);}
        }

        return stk.top();
    }
};


  int main(){

  }