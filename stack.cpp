#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    
    cout<<st.top();
    
    st.pop();
    
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
    
    stack<int> st1,st2;
    st1.swap(st2);
    // rest function same as vector
    // begin, end , rbegin, rend, clear, insert, sizem swap?
    return 0;
}
