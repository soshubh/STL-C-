//In pair we make group of two data-type or two containers.
#include <bits/stdc++.h>
using namespace std;
int main(){
  
    pair< int, string > p;
    
    p = make_pair ( 1, "soshubh" ); // first way to give value

    p = { 2, "shubh" }; // second way to give value
    
    p.first=3;        //|
    p.second="singh"; //| third way to give value
  
    cin>>p.first>>p.second; //taking user input in pair
    
    pair< int, string > s=p; // copying p to s;
    
    cout<<p.first<<" "<<p.second;
    
    return 0;
}
