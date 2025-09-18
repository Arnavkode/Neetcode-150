class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

    map<char, char> brackets;
    brackets['['] = ']';
    brackets['{'] = '}';
    brackets['('] = ')';
    int paircount = 0;

     
    for(char c: str){

        if(brackets.count(c)){
        s.push(c);
        }
        else{
        if(!s.empty() && c == brackets[s.top()]){
            s.pop();
        }
        else return false;
        }

    }

    if( s.empty()) return true;
    else return false;
    }
};


//Edge cases : "(" and "{}()}{", accessing s.top() with nothing inside the stack would cause a fault