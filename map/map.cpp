#include <bits/stdc++.h>
using namespace std;
// map store values in sorted order of unique key
//key value pair (key are unique nd key, value can be any data type )
int main() {
    
 map<int, int> mp;
    mp[1] = 2;
    mp.emplace(3, 5);
    mp.insert({2, 4});
    
    map<int, pair<int, int>> map2;
    
    map<pair<int, int>, int> map3;
    map3[{2, 3}] = 10;
    
    
    
    for(auto it: mp)
      cout<<it.first<<" "<<it.second<<"\n";
     
    cout<<mp[1]<<"\n";
    cout<<mp[5]<<"\n"; // bcoz 5 is not exist in key it will give the ouput as 0
    
    // auto it = mp.find(2);
    // cout<<*(it).second<<"\n";
    
    auto it1 = mp.lower_bound(2);
    auto it2 = mp.upper_bound(3);
    
    // erase, swap, size, empty, are same as above
    
    return 0;
}
