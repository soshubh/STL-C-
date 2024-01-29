#include <bits/stdc++.h>
using namespace std;

int main() {
   
   pair <int , int> p = {1,3};
   cout<<p.first<<"  "<<p.second;
   cout<<"\n";
   
   pair<int, pair<int,int>> q={1,{2,5}};
   cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
   cout<<"\n";
   
   pair<int, int> a[]={{1,2},{3,4},{5,7}};
   
//   cout<<a[0];  this will give error
   cout<<a[1].first<<" "<<a[2].second;
   

    return 0;
}
