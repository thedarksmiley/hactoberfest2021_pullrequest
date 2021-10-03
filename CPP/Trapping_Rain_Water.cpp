// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6

#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &height) {
        int n = height.size();
        stack<int> st;
        
        int water = 0;
        
        for(int i = 0; i<n; i++) {
            while(!st.empty() && height[i] > height[st.top()]) {
                
                int index = st.top();
                st.pop();
                
                if(st.empty())
                    break;
                
                int h = min(height[i], height[st.top()]) - height[index];
                int w = i - st.top() - 1;
                
                water += h * w;
            }
            st.push(i);
        }
        return water;
    }

int main(){
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << solve(height);
    return 0;
}