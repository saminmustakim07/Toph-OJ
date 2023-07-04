#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    while (test--) {

        int value_1, value_2;
        cin >> value_1 >> value_2;

        if ((value_1+value_2)/2 % 2 == 0) {
            cout << "Sadia will be happy." << endl;
        } else {
            cout << "Oops!" << endl;
        }

    }

    return 0;

}