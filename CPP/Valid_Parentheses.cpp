// check for valid Parentheses

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