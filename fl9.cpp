#include<bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> f1 = {3, 2, 9};
    forward_list<int> f2 = {8, 1, 2};

    // Splicing all elements from f1 after the first element of f2
    f2.splice_after(f2.begin(), f1);

    cout << "f1 after splicing: ";
    if (f1.empty()) {
        cout << "Empty" << endl;
    } else {
        for(auto x : f1) {
            cout << x << " ";
        }
        cout << endl;
    }

    cout << "f2 after splicing: ";
    for(auto x : f2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
