#include <bits/stdc++.h>
using namespace std;

// largest value stayed on the top
// it uses tree DS

int main() {

    //Max Heap
    priority_queue<int> pq;
    
    pq.push(1); //log n
    pq.push(2);
    pq.push(109);
    pq.emplace(4);
    
    cout<<pq.top()<<"\n";
    pq.pop();  //log n
    cout<<pq.top()<<"\n"; //O(1)
    
    // size, swap, empty function are the same 
    
    // minimum Priority Queue(Min heap)
    priority_queue<int, vector<int>, greater<int>> pd1;
    pd1.push(2);
    pd1.push(1);
    pd1.emplace(5);
    cout<<pd1.top();
    
    
    return 0;
}
