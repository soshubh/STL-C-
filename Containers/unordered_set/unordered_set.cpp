#include <bits/stdc++.h>
using namespace std;

// it sotore unique value in random order 

// lower_bound and upper_bound function dose not work, rest all function are same
// as above it dose not stores in any
// particular order it has a better complexity
// then set in most case, except some when collision happens

int main() {
    unordered_set<int> st;
    st.insert(1); // {1}
    st.insert(2); 
    st.insert(2); 
    st.insert(4); 
    st.insert(1); 

    return 0;
}
