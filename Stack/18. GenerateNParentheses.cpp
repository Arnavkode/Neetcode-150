#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void backtracking(int openN, int closedN, int n, string stack, vector<string> &res){

        if(openN == closedN && closedN == n){
            res.push_back(stack);
            return ;
        }

        if(openN <n){
            stack += '(';
            backtracking(openN + 1, closedN, n, stack,res);
            stack.pop_back();
        }

        if(openN > closedN){
            stack += ')';
            backtracking(openN, closedN + 1, n, stack, res);
            stack.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string stack;
        backtracking(0,0, n, stack, res);
        return res;

    }
};

int main(){

	generateNParentheses(3);
}