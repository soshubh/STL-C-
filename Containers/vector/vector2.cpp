#include <bits/stdc++.h>
using namespace std;

// access Values
int main() {
    vector<int> v;
   
    v.push_back(2);
    v.push_back(4);
    v.emplace_back(1);
   
   
   cout<<v[5]<<"\n";
    
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";
    cout<<"\n";
    
    // vector<int>::iterator it1 = v.begin();
    // vector<int>::iterator it2 = v.rend();
    // vector<int>::iterator it3 = v.rbegin();
    // cout<<*(it1)<<" "<<*(it2)<<" "<<*(it3);
    
    
    cout<<v[0]<<" "<<v.at(0);
    cout<<"\n";
    cout<<v.back()<<"\n";
    
    
    
    for(vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++)
       cout<<*(it1)<<" ";
    cout<<"\n";
    
    for(auto it1 = v.begin(); it1 != v.end(); it1++)
       cout<<*(it1)<<" ";
    cout<<"\n";
    
    
    // {2,4,1}
    // {2,1}
    v.erase(v.begin()+1);

    for(auto i: v )
       cout<<i<<" ";
    cout<<"\n";
    
    // v.erase(v.begin()+1, v.begin+4);
    
    
    return 0;
}
