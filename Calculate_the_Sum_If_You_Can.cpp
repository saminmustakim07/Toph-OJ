#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    long long int test, value, sum;
    cin >> test;

    while (test--) {

        cin >> value;

        vector <int> v = {1, -2};

        if (value%2 == 0) {
            sum = (value/2)*(v[0]+v[1]);
        }
        if (value%2 == 1){
            sum = ((value+1)/2*v[0]) + ((value-1)/2*v[1]);
        }

        cout << sum << endl;

    }

    return 0;

}