// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s) {
        
    stack<char > st;
    
    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else{
            
            if(st.empty()) return false;
            
            char str = st.top();
            st.pop();
            
            if(s[i] == ')'){
                if(str != '(') return false;
            }
            
            if(s[i] == '}'){
                if(str != '{') return false;
            }
            
            if(s[i] == ']'){
                if(str != '[') return false;
            }
            
        }
        
    }
    
    if(st.empty())
        return true;
    else return false;
    
}

int main(){
    string exp = "()[]{}";
    cout << isValid(exp);
    return 0;
}