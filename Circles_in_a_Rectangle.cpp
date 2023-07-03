#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    int test;
    cin >> test;

    for (int i=1; i<=test; i++) {

        double radius;
        cin >> radius;

        cout << "Case " << i << ": " << fixed << setprecision(2) << 2*radius*radius*(4-3.1416) << endl;

    }

    return 0;

}