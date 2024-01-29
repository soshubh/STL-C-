#include <bits/stdc++.h>
using namespace std;

// Iterator to the greatest element in the range [first, last). If several elements in the range are equivalent to the greatest element, returns the iterator to the first such element. Returns last if the range is empty.
int main() {
    vector<int> a;
    a.push_back(4);
    a.emplace_back(1);
    a.push_back(2);
    a.emplace_back(5);
    
    for(auto i: a)
        cout << i << " ";

    int maxi = *max_element(a.begin(), a.end());
    cout << "\nMaxi is: " << maxi;

    return 0;
}
