#include <bits/stdc++.h>
using namespace std;


/*Which is better Push_back or Emplace_back?
If performance is a concern, emplace_back() is generally better than push_back() since it constructs the object in-place, potentially avoiding a copy operation. However, push_back() is simpler to use and can be more appropriate in certain situations.
*/


int main() {
    vector<int> v;
    
    v.push_back(2);
    v.push_back(4);
    v.emplace_back(1);
    for(auto i : v)
     cout<<i<<" ";
    cout<<"\n";
     
    vector<pair <int, int>> vec;
    vec.push_back({1,2});
    vec.push_back({4,6});
    for(auto i: vec)
        cout<<i.first<<" "<<i.second<<"\n";
    
    vector<int> va(5,100);
    for(auto i: va )
     cout<<i<<" ";
    cout<<"\n";
    
    vector<int> vb(5);
    for(auto i: vb )
     cout<<i<<" ";
    cout<<"\n";
    
    vector<int> v1(5,20);
    vector<int> v2(v1);
    for(auto i: v2)
     cout<<i<<" ";
    cout<<"\n";
     
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    
    
    return 0;
}
