#include <bits/stdc++.h>
using namespace std;

// store unique value in sorted oreder
int main() {
    set<int>st;
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(3); // {1,2,3}
    st.insert(4); // {1,2,3}
    st.insert(1); // {1,2,3}
    
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are the same
    
    /*
    auto it = st.find(2); // return iterator which point to the element 
    auto it3 = st.find(5); // if element is not there it will return st.end()
    */
    
    st.erase(2);
    cout<<st.size();
    cout<<st.count(1);/// if 1 is thre give 1 otherwise 0
    
    return 0;
}
