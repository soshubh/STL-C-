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

    // {1,2,3,4,5,}
    auto it1 = st.find(2); 
    auto it2 = st.find(3); 
    st.erase(it1,it2); // {1,4,5}
    
    // lower_bound() and upper_bound() function work as same in vector
    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(4);
    
    return 0;
}
