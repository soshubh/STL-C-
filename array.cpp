#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,7> a={1,2,34,5,6};
    for(auto i: a)
    cout<<i<<" ";
    cout<<endl;
    for(int i=0; i < a.size();i++ )
     cout<<a.at(i)<<" ";
    cout<<endl;
    cout<<"Find 34 in array : "<<get<2>(a);//will print 2 index element.
    cout<<endl;
    cout<<"Front : "<<a.front()<<endl;
    cout<<"Back : "<<a.back()<<endl;
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Max Size : "<<a.max_size()<<endl;

    array<int,7> b={1,4,5,6,7,9,0};
    array<int,7> c={10,20,15,16,17,19,11};
    b.swap(c);
    for(int i:b)
    cout<<i<<" ";
    cout<<endl;
    for(int i:c)
    cout<<i<<" ";
    cout<<endl;
    array<int,3> d;
    d.fill(0);
    for(int i:d)
     cout<<i<<" ";

}
