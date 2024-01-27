#include <bits/stdc++.h>
using namespace std;

// insert Values
int main() {
    vector<int> v(2,100);
   
    v.push_back(2);
    v.emplace_back(1);
    
    v.insert(v.begin(),300);
    v.insert(v.begin()+2, 2,10);
    
    vector<int> copy(2,50);
    
    v.insert(v.begin(), copy.begin(), copy.end());
    
    cout<<v.size();
    cout<<"\n";
    
    v.pop_back();
    
    for(auto i: v)
     cout<<i<<" ";
    cout<<"\n";
    
    v.swap(copy);
    cout<<"V: ";
    for(auto i: v)
     cout<<i<<" ";
    cout<<"\nCopy: ";
    for(auto i: copy)
     cout<<i<<" ";
    cout<<"\n";
    
    v.clear();
    
    cout<<v.empty();
    
    return 0;
}
