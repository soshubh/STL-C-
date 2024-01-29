#include <bits/stdc++.h>
using namespace std;

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
