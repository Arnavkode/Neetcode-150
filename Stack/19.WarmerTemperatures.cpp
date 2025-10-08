#include <bits/stdc++.h>
using namespace std;


vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);
        stack<int> stk;
        int prev = -1;  

               

        int count = 0;

        for(int i = n-1; i>=0; i--){

            while(!stk.empty() && temperatures[i] >= temperatures[stk.top()]){
                stk.pop();
            }
            if(!stk.empty()){
                ans[i] = stk.top() - i;
            }
            
                stk.push(i);
            
        }

        
        return ans;
    }

int main(){

vector<int> temperatures = {73,74,75,71,69,72,76,73};
vector<int> ans = dailyTemperatures(temperatures);
for(auto it: ans){
    cout<< it<<" " ;
}


}