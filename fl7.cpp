#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>f1 = {3,2,9};
    forward_list<int>f2 = {8,1,2};
    f1.sort();
    f2.sort();
    f1.merge(f2);
    forward_list<int>::iterator x;
    for(x=f1.begin(); x!=f1.end();x++)
    {
        cout<<*x;
    }

    return 0;
}