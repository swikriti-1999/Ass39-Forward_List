#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl = {1,2,2,3,4,5};
    fl.unique();
    forward_list<int>::iterator x;
    for(x=fl.begin(); x!=fl.end();x++)
    {
        cout<<*x;
    }
    return 0;
}