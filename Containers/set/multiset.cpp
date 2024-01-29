#include <bits/stdc++.h>
using namespace std;

// only store values in sorted oreder
int main() {
    multiset<int>st;
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(3); // {1,2,3}
    st.insert(4); // {1,2,3,4 }
    st.insert(1); // {1,1 ,2,3}
    
    st.erase(1); //erase all the 1's
    
    int count = st.count(1);
    
    
    
    st.erase(st.find(1)); // only a single one will be erased
    
    st.erase(st.find(1),st.find(1)+2);
    
    // rest all the function are the same
    
    return 0;
}
