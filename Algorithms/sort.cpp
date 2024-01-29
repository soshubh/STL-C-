#include <bits/stdc++.h>
using namespace std;

// he comp function is a custom comparison function that you define to specify the order in which elements should be sorted. 

bool comp(pair<int, int>& x, pair<int, int>& y) {
    // Compare based on the second element
    if (x.second != y.second) {
        return x.second < y.second; // Sort in ascending order based on the second element
    }

    // If the second elements are the same, sort in descending order based on the first element
    return x.first > y.first;
}

int main() {
    sort(a, a+n);
    
    sort(v.begin(), v.end());
    
    sort(a+2, a+4);
    
    sort(a, a+n, greater<int>);
    
    pair<int, int> b[]={{1,2},{2,1},{4,1}};
    // sort it acording to second element
    // if second element is samw then sort it accoding to first element but in descending
    sort(a,a+n, comp);
    // {4,1},{2,1},{1,2}
    
    return 0;
}
