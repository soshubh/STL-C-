#include <bits/stdc++.h>
using namespace std;

int main() {
   list<int> ls;
   
   ls.push_back(4);
   ls.emplace_back(5);
   
   ls.push_front(5);
   
   for(auto i: ls)
    cout<<i<<" ";
    
  // rest function same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}
