#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int perimeter;
        cin >> perimeter;

        cout << pow(perimeter/4, 2) << endl;

    }

    return 0;

}