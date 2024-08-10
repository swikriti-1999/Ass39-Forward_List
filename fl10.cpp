#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> f1 = {3, 2, 9};
    forward_list<int> f2;

    // Assigning the contents of f1 to f2
    f2 = f1;

    // Printing the elements of f2
    for (auto x = f2.begin(); x != f2.end(); x++) {
        cout << *x << " ";
    }

    return 0;
}
