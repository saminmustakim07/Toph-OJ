#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int length, number;
        cin >> length >> number;

        cout << (((number-2)*2)+6)*pow(length/2,2) << endl;

    }

    return 0;

}