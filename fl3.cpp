#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    forward_list<int>fl = {1,2,3,4,5,6,7,8,9,10};
    forward_list<int>::iterator x;
    for(x=fl.begin();x!=fl.end();x++)
    {
         sum = sum + (*x);
    }
    cout<<sum;

    return 0;
}