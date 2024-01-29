#include <bits/stdc++.h>
using namespace std;
// This function is used to count the number of set bits in an unsigned integer. In other words, it counts the number of 1’s in the binary form of a positive integer.

int main() {
    int n = 4;
    cout << __builtin_popcount(n);
    cout<<n;
    
    long long p = 1e15;
    cout << __builtin_popcount(p);
    
    return 0;
}
