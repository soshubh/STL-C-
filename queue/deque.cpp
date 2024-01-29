#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dp;
    dp.push_back(1);
    dp.emplace_back(2);
    dp.push_front(4);
    dp.emplace_front(3);
    
    dp.pop_back();
    dp.pop_front();
    
    cout<<dp.back();
    cout<<" ";
    cout<<dp.front();
    
    // rest function same as vector
    // begin, end , rbegin, rend, clear, insert, sizem swap?
    return 0;
}
