#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>f1 = {1,2,3};
    forward_list<int>f2 = {4,5,6};
    f1.merge(f2);
    forward_list<int>::iterator x;
    for(x=f1.begin(); x!=f1.end();x++)
    {
        cout<<*x;
    }

    return 0;
}